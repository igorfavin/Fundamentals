#include <locale.h>
#include <iostream>


using namespace std;

float leNumero()
{
    float nota;
    scanf("%f%*c", &nota);
    return nota;
}

float retornaMedia(float nota1, float nota2, float nota3, float peso1, float peso2, float peso3)
{
    float media;
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1+peso2+peso3);
    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;


    printf("Declade as notas: ");
    nota1 = leNumero();
    nota2 = leNumero();
    nota3 = leNumero();
    printf("Declare os pesos: ");
    peso1 = leNumero();
    peso2 = leNumero();
    peso3 = leNumero();

    printf("A média ponderada é igual a: %5.2f", retornaMedia(nota1,nota2,nota3,peso1,peso2,peso3));

    return 0;
}
