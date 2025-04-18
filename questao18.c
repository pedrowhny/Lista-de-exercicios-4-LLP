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

    int numero, i;
    int primo = 1;  // Suponha que o número é primo

    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) // Verifica se o número é menor ou igual a 1
    {
        printf("Por favor, digite um número maior que 1.\n");
        return 1;  // Encerra o programa se o número for menor ou igual a 1
    }

    for (i = 2; i <= numero / 2; i++) // Verifica até a metade do número
    {
        if (numero % i == 0)
        {
            primo = 0;  // Não é primo
            break; // Sai do loop se encontrar um divisor
        }
    }

    if (primo == 1) // Se primo for 1, o número é primo
    {
        printf("O número %d é primo.\n", numero);
    }

    else // Caso contrário
    {
        printf("O número %d não é primo.\n", numero);
    }

    system("pause");
    
    return 0;
}