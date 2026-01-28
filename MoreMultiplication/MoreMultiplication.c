/*
MoreMultiplication.c
Solution for Kattis problem MoreMultiplication
https://open.kattis.com/problems/multiplication
Author: eldelbo89
*/

#include <stdio.h>
#include <stdlib.h>

// Maximum number of digits in the multiplication result 9999*9999 = 99980001
#define MAX_RESULT_SIZE 8

void printTheFinaleShape(int *arrA, int *arrB, int *up, int *low, int *result, int columns, int rows, int resultSize)
{
    // Predefined drawing helpers (used with precision printing)
    const char dashPool[] = "-------------------";
    const char cellPadding[] = "    ";
    const char cellSeparator[] = "+---+---+---+---+";
    const char cellInterior[] = "| / | / | / | / |";

    // Width of the table depends on number of digits
    int tableWidth = columns * 4 + 3;

    // Starting index into the result array
    int resultStartIndex = 0;

    int resultPrintingStarted = 0; // tracks when result digits begin printing
    int resultRowOffset = (rows + columns) - resultSize;

    // Top border
    printf("+%.*s+\n", tableWidth, dashPool);

    // Header row: first operand digits
    printf("|%.3s", cellPadding);
    for (int i = 0; i < columns; i++)
    {
        printf("%d%.3s", arrA[i], cellPadding);
    }
    printf("|\n");

    // Each row corresponds to one digit of the second operand
    for (int j = 0; j < rows; j++)
    {
        // Horizontal separator
        printf("| %.*s |\n|", tableWidth - 2, cellSeparator);

        // Left edge marker depends on whether result digits started
        if (resultPrintingStarted)
            printf("/|");
        else
            printf(" |");

        // Print tens digits of partial products
        for (int i = j * columns; i < (j * columns) + columns; i++)
        {
            printf("%d /|", up[i]);
        }
        printf(" |\n");

        // Middle row containing second operand digit
        printf("| %.*s%d|\n|", tableWidth - 2, cellInterior, arrB[j]);

        // Print aligned result digit if applicable
        if (j >= resultRowOffset)
        {
            printf("%d|", result[resultStartIndex++]);
            resultPrintingStarted = 1;
        }
        else
        {
            printf(" |");
        }

        // Print ones digits of partial products
        for (int i = j * columns; i < (j * columns) + columns; i++)
        {
            printf("/ %d|", low[i]);
        }
        printf(" |\n");
    }

    // Bottom separator before final result row
    printf("| %.*s |\n|", tableWidth - 2, cellSeparator);

    // Print final result digits aligned under columns
    for (int i = resultStartIndex; i < resultSize; i++)
    {
        if (result[i] || resultPrintingStarted)
        {
            if (resultPrintingStarted)
                printf("/");
            else
                printf(" ");
            printf(" %d ", result[i]);
            resultPrintingStarted = 1;
        }
        else
        {
            printf("%.3s", cellPadding);
        }
    }

    // Bottom border
    printf("%.3s|\n+%.*s+\n", cellPadding, tableWidth, dashPool);
}

int main(void)
{
    // Read input pairs until "0 0" is encountered
    while (1)
    {
        int column = 1, row = 1, resultSize = 1;

        // Fixed-size digit buffers (max 4 digits each)
        int op1[4] = {0}, op2[4] = {0};

        // Result digit buffer (max 8 digits)
        int result[MAX_RESULT_SIZE] = {0};

        int A, B;
        scanf("%d %d", &A, &B);

        // Termination condition
        if (!A && !B)
            break;

        // Compute full multiplication result
        int multiply = A * B;
        for (int i = 7; i >= 0; i--)
        {
            result[i] = multiply % 10;
            multiply = multiply / 10;
            if (multiply == 0)
                break;
            resultSize++;
        }

        // Extract digits of A (right to left)
        for (int i = 3; i >= 0; i--)
        {
            op1[i] = A % 10;
            A = A / 10;
            if (A == 0)
                break;
            column++;
        }

        // Extract digits of B (right to left)
        for (int i = 3; i >= 0; i--)
        {
            op2[i] = B % 10;
            B = B / 10;
            if (B == 0)
                break;
            row++;
        }

        // Trim leading zeros if operand has fewer than 4 digits
        int *newResult = &result[MAX_RESULT_SIZE - resultSize];
        int *arrA = &op1[4 - column];
        int *arrB = &op2[4 - row];
        // Allocate arrays for partial multiplication results
        int sizeOfResults = row * column;
        int *upper = (int *)malloc(sizeOfResults * sizeof(int));
        int *lower = (int *)malloc(sizeOfResults * sizeof(int));

        // Compute partial products digit by digit
        int coulumnIndex = 0, rowIndex = 0;
        for (int i = 0; i < sizeOfResults; i++)
        {
            int mul = arrA[coulumnIndex] * arrB[rowIndex];
            lower[i] = mul % 10; // ones digit
            upper[i] = mul / 10; // tens digit

            coulumnIndex++;
            if (coulumnIndex == column)
            {
                coulumnIndex = 0;
                rowIndex++;
            }
        }

        // Print the ASCII-art multiplication
        printTheFinaleShape(arrA, arrB, upper, lower, newResult, column, row, resultSize);

        // Free dynamically allocated memory
        free(upper);
        free(lower);
    }

    return 0;
}
