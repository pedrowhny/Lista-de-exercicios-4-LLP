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

    int n;
    double Hn = 0.0;

    printf("Digite um número inteiro n (n >= 1): ");
    scanf("%d", &n);

    if (n >= 1) // Verifica se n é maior ou igual a 1
    {
        for (int i = 1; i <= n; i++) // Loop de 1 até n
        {
            Hn += 1.0 / i;  // Soma os inversos dos números de 1 até n
        }

        printf("O valor de H%d (número harmônico) é: %.6f\n", n, Hn);
    }

    else
    {
        printf("Por favor, digite um número maior ou igual a 1.\n");
    }

    system("pause");
    
    return 0;
}