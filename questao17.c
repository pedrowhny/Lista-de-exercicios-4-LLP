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

    int N;
    int numero = 1; // O primeiro número a ser impresso

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) // Verifica se o número é positivo
    {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) // Para cada linha
    {
        for (int j = 1; j <= i; j++) // Para cada número na linha
        {
            printf("%d ", numero);
            numero++; // Incrementa o número
        }
        printf("\n"); // Pula para a próxima linha
    }

    system("pause");

    return 0;
}