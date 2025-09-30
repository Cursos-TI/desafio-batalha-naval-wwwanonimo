#include <stdio.h>

int main(){

    //Tabuleiro
    int * tabuleiro[10][10];
    int tamanho = 3;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            {
                tabuleiro[i][j] = 0;
            }
    }

    //Linhas e Colunas Vertical
    int linhaVertical = 5, colunaVertical = 7;

    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    //Linhas e Colunas Horizontal
    int linhaHorizontal = 2, colunaHorizontal = 4;

    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    //Imprimir Tabuleiro
    printf ("   A B C D E F G H I J\n\n");
    for (int i = 0, k = 0; i < 10 && k < 11; i++, k++)
    {
        printf("%d  ", k);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
