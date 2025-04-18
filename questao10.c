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

    int valor, soma = 0, count = 0; // Inicializa soma e contador
    float media;

    printf("Digite 10 números inteiros positivos:\n");

    for (int i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Número %d: ", i);
        scanf("%d", &valor);

        if (valor > 0) // Ignora números não positivos
        {
            soma += valor;
            count++; // Conta quantos números positivos foram inseridos
        }
    }

    if (count > 0) // Verifica se algum número positivo foi digitado
    {
        media = soma / (float)count; // Calcula a média
        printf("A média dos números positivos digitados é: %.2f\n", media);
    }

    else // Caso contrário
    {
        printf("Nenhum número positivo foi digitado.\n");
    }

    system("pause");

    return 0;
}