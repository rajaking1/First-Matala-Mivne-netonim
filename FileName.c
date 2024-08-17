int main() 
{
    int matrix[50][50];
    int num = 1;
    for (int i = 0; i < 50; i++) 
    {
        for (int j = 0; j < 50; j++) 
        {
            matrix[i][j] = num++;
        }
    }
    testRecursiveSearch(matrix, 123);  
    testRecursiveSearch(matrix, 987);  
    testRecursiveSearch(matrix, 3000);

    return 0;
}