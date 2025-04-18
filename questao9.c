#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <limits.h> // Para INT_MAX e INT_MIN

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int valor;
    int menor = INT_MAX;
    int maior = INT_MIN;

    printf("Digite 10 números inteiros:\n");

    for (int i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Número %d: ", i);
        scanf("%d", &valor);

        if (valor < menor) // Verifica se o valor digitado é menor que o menor atual
            menor = valor;

        else if (valor > maior) // Verifica se o valor digitado é maior que o maior atual
            maior = valor;
    }

    printf("O menor valor digitado foi: %d\n", menor);
    printf("O maior valor digitado foi: %d\n", maior);

    system("pause");
    
    return 0;
}
