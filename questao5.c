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

    int soma = 0;
    int numero = 0;
    int contador = 0;

    while (contador < 50) // Enquanto o contador for menor que 50
    {
        soma += numero; // Adiciona o número atual à soma
        numero += 2; // Pega o próximo número par
        contador++; // Incrementa o contador
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    system("pause");

    return 0;
}
