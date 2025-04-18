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
    int contador = 0;
    int numero = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Os %d primeiros números naturais ímpares são:\n", N);

    while (contador < N) // Enquanto o contador for menor que N
    {
        printf("%d\n", numero);
        numero += 2; // Pula para o próximo número ímpar
        contador++;  // Conta quantos ímpares já foram impressos
    }

    system("pause");

    return 0;
}