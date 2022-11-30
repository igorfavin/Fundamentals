#include <locale.h>
#include <iostream>


using namespace std;

float mostraArr(float arr[8])
{
    for (int i = 0; i < 8; i++)
    {
        if(arr[i] != 0)
        {
            printf("%.0f", arr[i]);
        }
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float arr[8];
    float pos[] = {0,0,0,0,0,0,0,0};
    float neg[] = {0,0,0,0,0,0,0,0};
    float numero;
    printf("Digite oito numeros sequenciais podendo ser negativo ou positivo: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%f", &numero);
        arr[i] = numero;
        if(numero > 0)
        {
            for(int i = 0; i < 8; i++)
            {
                if(pos[i] == 0)
                {
                    pos[i] = numero;
                    break;
                }
            }
        } else if(numero < 0)
        {
            for(int i = 0; i < 8; i++)
            {
                if(neg[i] == 0)
                {
                    neg[i] = numero;
                    break;
                }
            }
        }
    }
    printf("Array total: \n");
    mostraArr(arr);
    printf("\nArray numeros positivos: \n");
    mostraArr(pos);
    printf("\nArray numeros negativos: \n");
    mostraArr(neg);

    return 0;
}
