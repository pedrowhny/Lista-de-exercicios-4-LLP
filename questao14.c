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
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &N);

    if (N < 0) // Verifica se o número é negativo
    {
        printf("Por favor, digite um número maior ou igual a zero.\n");
        return 1;  // Encerra o programa se o número for negativo
    }

    if (N == 0) // Caso base da sequência de Fibonacci
    {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, a);
    }

    else if (N == 1) // Outro caso base
    {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, b);
    }

    else // Caso contrário
    {
        for (int i = 2; i <= N; i++) // Inicia o loop a partir do terceiro termo
        {
            proximo = a + b; // Calcula o próximo termo da sequência
            a = b; // Atualiza o valor de a para o termo anterior
            b = proximo; // Atualiza b para o novo termo
        }
        printf("O %dº termo da sequência de Fibonacci é: %d\n", N, b);
    }

    system("pause");
    
    return 0;
}