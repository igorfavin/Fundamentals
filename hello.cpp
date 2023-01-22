#include <stdio.h>
#include <string>
#define LENGTH 50
#define file_name "Customer.dat"

struct cliente
{
    int cod_identify;
    char nome[LENGTH];
    float saldo;
};

using namespace std;

int main()
{
    FILE *arquivo;
    arquivo = fopen(file_name, "w");

    if (arquivo != NULL)
    {
        cliente customer_info;
        printf("Digite o código de identificação do cliente: ");
        scanf("%d%*c", &customer_info.cod_identify);
        printf("Digite o nome do cliente: ");
        scanf("%s%*c", &customer_info.nome);
        printf("Digite o saldo do cliente: ");
        scanf("%f%*c", &customer_info.saldo);
        fwrite(&customer_info, sizeof(cliente), 1, arquivo);
        fclose(arquivo);


        FILE *arquivo_leitura;
        arquivo_leitura = fopen(file_name, "r");
        if (arquivo_leitura != NULL)
        {
            cliente customer_info;
            printf("Details account are:\n");
            while((fread(&customer_info, sizeof(cliente),1 , arquivo_leitura))==1)
            {
                printf("\n\nAccount Number: %d\nName: %s\nBalance Account: %.2f\n\n", customer_info.cod_identify, customer_info.nome, customer_info.saldo);
            }
            fclose(arquivo_leitura);
        }
    }
    else{
        printf("Problema na abertura do arquivo!");
    }
    return 0;
}