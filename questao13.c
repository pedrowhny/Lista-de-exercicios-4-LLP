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

    int soma = 0;

    for (int i = 1; i < 1000; i++) // Loop de 1 a 999
    {
        if (i % 3 == 0 || i % 5 == 0) // Verifica se o número é múltiplo de 3 ou 5
        {
            soma += i;  // Soma o número
        }
    }

    printf("A soma dos números abaixo de 1000 que são múltiplos de 3 ou 5 é: %d\n", soma);

    system("pause");
    
    return 0;
}