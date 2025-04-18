#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0) // Verifica se o número é positivo
    {
        printf("Números de 0 até %d:\n", num);
        
        for (int i = 0; i <= num; i++) // Loop de 0 até o número digitado
        {
            printf("%d\n", i);
        }
    }

    else // Caso contrário
    {
        printf("Por favor, digite um número inteiro positivo.\n");
    }

    system("pause");

    return 0;
}