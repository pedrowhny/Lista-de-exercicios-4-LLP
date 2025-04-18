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
        printf("Números de %d até 0:\n", num);
        
        for (int i = num; i >= 0; i--) // Loop do número digitado até 0
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