#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

// Função para calcular o fatorial de um número
long long fatorial(int n)
{
    long long fat = 1;
    for (int i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int N;
    double E = 1.0; // O valor inicial de E é 1 (0! = 1)

    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);

    if (N <= 0) // Verifica se o número é positivo
    {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) // Loop de 1 até N
    {
        E += 1.0 / fatorial(i); // Adiciona o valor de 1/i!
    }

    printf("O valor de E calculado até %d termos é: %.6f\n", N, E);

    system("pause");

    return 0;
}