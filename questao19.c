#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double s = 0.0;

    for (int i = 1; i <= 55; i++)
    {
        double numerador = 2.0 * i - 1.0;
        double denominador = (double) i;
        s += numerador / denominador;
    }

    printf("O valor de S é: %lf\n", s);

    system("pause");

    return 0;
}