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

    int valor, soma = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for (int i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Número %d: ", i);
        scanf("%d", &valor);
        soma += valor; // Adiciona o valor digitado à soma total
    }

    media = soma / 10.0; // Cálculo da média (divisão por 10.0 para garantir que o resultado seja float)

    printf("A média dos 10 números digitados é: %.2f\n", media);

    system("pause");

    return 0;
}
