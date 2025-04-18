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

    int numero, maior, menor;

    printf("Digite um número inteiro (número negativo para encerrar): ");
    scanf("%d", &numero);

    if (numero < 0) // Verifica se o primeiro número é negativo
    {
        printf("Nenhum número foi digitado.\n");
        return 0;  // Encerra o programa caso o primeiro número seja negativo
    }

    maior = menor = numero; // Inicializa o maior e o menor com o primeiro número

    while (numero >= 0) // Enquanto o número for não negativo
    {
        if (numero > maior) // Verifica se o número digitado é maior que o maior atual
            maior = numero;  // Atualiza o maior número

        if (numero < menor) // Verifica se o número digitado é menor que o menor atual
            menor = numero;  // Atualiza o menor número

        printf("Digite um número inteiro (número negativo para encerrar): ");
        scanf("%d", &numero);
    }

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    system("pause");
    
    return 0;
}