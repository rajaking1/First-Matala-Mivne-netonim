#include <stdio.h>
#include <stdbool.h>
bool searchMatrixRecursive(int matrix[][50], int startRow, int startCol, int endRow, int endCol, int target) 
{
    //T(n)=3T(n/2)+o(1)
    // a=3 num of subproblems b=2 size of ea subproblem divided into c=0 remaining if statments
    //O(N^(log2^3))
    //T(N)=3T(n/2)+o(1)
    //T(N/2)=3(3(T(n/4)+o(1))+o(1)
    //T(N/4)=3(3*3(T(n/8+o(1))+o(1)+o(1)=3(3*3(T(n/8+3*o(1)
    //T(n)=3^k*T(n/2^k+o(1)*sigma 3^i from 0 till k-1
    //it stops when t(n/2^k)=1
    //means when 2^k=n
    //when log2^n
    //place in sigma
    //when you place in sigma you switch by log rules
    //loga^2^n=n^2^logn
    //when you do it you get n=3
    //log2^3
    //o(n^log2^3)

    if (startRow > endRow || startCol > endCol)
    {
        return false;
    }
    int midRow = startRow + (endRow - startRow) / 2;
    int midCol = startCol + (endCol - startCol) / 2;
    if (matrix[midRow][midCol] == target)
    {
        return true;
    }
    else if (matrix[midRow][midCol] < target) 
    {
        return searchMatrixRecursive(matrix, midRow + 1, midCol + 1, endRow, endCol, target) ||
            searchMatrixRecursive(matrix, startRow, midCol + 1, midRow, endCol, target) ||
            searchMatrixRecursive(matrix, midRow + 1, startCol, endRow, midCol, target);
    }
    else 
    {
        return searchMatrixRecursive(matrix, startRow, startCol, midRow - 1, midCol - 1, target) ||
            searchMatrixRecursive(matrix, startRow, midCol, midRow - 1, endCol, target) ||
            searchMatrixRecursive(matrix, midRow, startCol, endRow, midCol - 1, target);
    }
}
void testRecursiveSearch(int matrix[][50], int target) 
{
    if (searchMatrixRecursive(matrix, 0, 0, 49, 49, target))
    {
        printf("Element %d found in the matrix.\n", target);
    }
    else
    {
        printf("Element %d not found in the matrix.\n", target);
    }
}

