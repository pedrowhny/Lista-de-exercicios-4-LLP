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

    int quantidade, numero;
    int maior, contador = 0;

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) // Verifica se a quantidade é maior que 0
    {
        printf("Por favor, digite uma quantidade válida (maior que 0).\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) // Loop de 1 até a quantidade digitada
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (i == 1) // Primeiro número lido
        {
            maior = numero;
            contador = 1;
        }

        else // Caso contrário
        {
            if (numero > maior) // Verifica se o número lido é maior que o maior atual
            {
                maior = numero;
                contador = 1; // Reinicia o contador para o novo maior
            }

            else if (numero == maior) // Verifica se o número lido é igual ao maior atual
            {
                contador++; // Incrementa o contador se for igual ao maior atual
            }
        }
    }

    printf("\nO maior número lido foi: %d\n", maior);
    printf("O maior número apareceu %d vez(es).\n", contador);

    system("pause");

    return 0;
}