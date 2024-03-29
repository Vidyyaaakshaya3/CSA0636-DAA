#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to print Pascal's triangle
void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        // Print spaces to align the triangle
        for (int j = 0; j < numRows - i - 1; j++) {
            printf(" ");
        }

        // Print values for the current row
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }

        printf("\n");
    }
}

int main() {
    int numRows;

    // Input the number of rows for Pascal's triangle from the user
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    // Print Pascal's triangle
    printPascalTriangle(numRows);

    return 0;
}
