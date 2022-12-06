#include <stdio.h>


void shOutput(int arr[], int matriz[][3])
{
    printf("\n");
    printf("\n");
    printf("\n");
    for(int i = 0; i <= sizeof(matriz)/sizeof(int); i++)
    {
        printf("Column %i:\n", i+1);
        for (int j = 0; j < sizeof(matriz[0])/sizeof(int); j++)
        {
            printf("Value: %i\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Result: \n");
    for (int i = 0; i <= sizeof(arr)/sizeof(int); i ++)
    {
        printf("Column %i - total: %i\n", i+1, arr[i]);
    }
}

auto readNumbers(int matriz[][3])
{
    for(int i = 0; i <= sizeof(matriz)/sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(matriz[0])/sizeof(int); j++)
        {
            printf("Enter the number for row %i column %i: \n", j+1, i+1);
            scanf("%i%*c", &matriz[i][j]);
        }
    }
}

auto sumNumbers(int arr[], int matriz[][3])
{
    for(int i = 0; i <= sizeof(matriz)/sizeof(int);i++)
    {
        int result = 0;
        for (int j = 0; j < sizeof(matriz[0]) / sizeof(int); j++)
        {
            result += matriz[i][j];
        }
        arr[i] = result;
    }
}


