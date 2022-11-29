#include <locale.h>
#include <iostream>
#include <vector>

using namespace std;

auto retornaItem()
{
    int qtd_item;
    float valor_obj;
    printf("Quantidade: ");
    scanf("%d%*c", &qtd_item);
    printf("Valor do item: ");
    scanf("%f%*c", &valor_obj);
    struct result {int qtd_item ; float valor_obj;};
    return result{qtd_item, valor_obj};
}

float maisVendido(int qtd_item[10], float obj_valor[10])
{
    int resultado = qtd_item[0];
    float valorItem = obj_valor[0];

    for(int i=0; i < 10; i++)
    {
        if(qtd_item[i] > resultado)
        {
            valorItem = obj_valor[i];
        }
    }

    return valorItem;
}


int main()
{
    setlocale(LC_ALL,"Portuguese");
    const float salario = 545.0;
    float tot_valor = 0;
    float obj_valor[10];
    int qtd_item[10];

    for(int i=0 ; i < 10; i++)
    {
        auto resultado = retornaItem();
        qtd_item[i] = resultado.qtd_item;
        obj_valor[i] = resultado.valor_obj;
        tot_valor = tot_valor + (resultado.valor_obj*resultado.qtd_item);
    }

    printf("Valor total venda: %.2f\n", tot_valor);
    printf("O valor da comissão: %.2f\n", tot_valor * 0.05);
    printf("Valor do item mais vendido: %.2f\n", maisVendido(qtd_item, obj_valor));

    return 0;
}
