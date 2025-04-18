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

    int contador = 0;
    int numero = 1;

    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");

    while (contador < 5) // Enquanto o contador for menor que 5
    {
        if (numero % 3 == 0) // Verifica se o número é múltiplo de 3
        {
            printf("%d\n", numero);
            contador++; // Incrementa o contador se o número for múltiplo de 3
        }
        numero++; // Incrementa o número para verificar o próximo
    }

    system("pause");

    return 0;
}
