#include <locale.h>
#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;


int main()
{
    setlocale(LC_ALL,"Portuguese");
    int numeros [9];
    int cont = 0;

    srand(time(0));
    for (int i = 0; i < 9; i++)
    {
        numeros[i] = rand() % 100;
        if(numeros[i] % 2 == 0)
        {
            cont += 1;
        }
        printf("%d\n", numeros[i]);
    }
    printf("\nTemos 9 números, sendo deles %d são pares", cont);


    return 0;
}
