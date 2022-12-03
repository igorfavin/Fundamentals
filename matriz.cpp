#include <locale.h>
#include <iostream>

using namespace std;

int retornaTotal(int matriz[3][5])
{
    int total;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total = total + matriz[i][j];

        }
    }
    return total;
}


int main()
{
    setlocale(LC_ALL,"Portuguese");

    int matriz[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("O total somando todos os numeros dessa matriz é igual á: %d", retornaTotal(matriz));


    return 0;
}
