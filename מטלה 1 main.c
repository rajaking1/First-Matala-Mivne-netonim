#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, target;

    // Get the size of the matrix
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[100][100]; // Declare a 100x100 matrix (max size)

    // Get the elements of the matrix
    printf("Enter the elements of the matrix (sorted rows and columns):\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Get the target number to search for
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Call the function to search for the target
    searchInMatrix(matrix, n, target);

    return 0;
}
