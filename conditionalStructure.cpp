#include <locale.h>
#include <iostream>
#include <list>


using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float angulo;
    int voltas;

    printf("Informe o angulo: ");
    scanf("%f%*c", &angulo);

    if(angulo > 360 || angulo < -360)
    {
        voltas = {angulo / 360};
        angulo = ((angulo / 360) - voltas) * 360;
    } else
    {
        voltas = 0;
    }
    if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360)
    {
        printf("Está encima de algum dos eixos.");
    }
    if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo > -360))
    {
        printf("1º Quadrante");
    } else if ((angulo > 90 && angulo < 180) || (angulo < -180 && angulo > -270))
    {
        printf("2º Quadrante");
    } else if ((angulo > 180 && angulo < 270) || (angulo < -90 && angulo > -180))
    {
        printf("3º Quadrante");
    }else if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo > -90))
    {
        printf("4º Quadrante");
    }
    printf(" %d volta(s) no sentido ", voltas);
    if (angulo < 0)
    {
        printf("horário");
    } else
    {
        printf("anti-horário");
    }

    return 0;
}
