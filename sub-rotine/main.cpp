#include <locale.h>
#include <iostream>
#include <sub-rotine.h>

using namespace std;



int main()
{
    setlocale(LC_ALL,"Portuguese");

    int result[3];
    int numbers[3][3];

    readNumbers(numbers);
    sumNumbers(result, numbers);
    shOutput(result, numbers);

    return 0;
}
