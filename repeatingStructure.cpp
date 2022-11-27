#include <locale.h>
#include <iostream>


using namespace std;


int main()
{
    int qtd;
    float notas, total;

    setlocale(LC_ALL, "Portuguese");
    printf("Quantas notas tem para fazer a média?\n");
    scanf("%d%*c", &qtd);
    for(int i = 0; i < qtd; i++)
    {
        printf("Digite a nota %dº: ", i+1);
        scanf("%f%*c", &notas);
        total += notas;
    }
    printf("A média das notas é: %.2f", (total/qtd));

    return 0;
}
