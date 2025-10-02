#include <stdio.h>

int main(){

    //Criando um tabuleiro 10x10 
    int * tabuleiro[10][10];
    int tamanho = 3;

    //Prenchendo o Tabuleiro com o numero 0 em todas as posições
    
    for (int i = 0; i < 10; i++)//i = percorre a linhas de 0 até 9
    {
        for (int j = 0; j < 10; j++)//j = percorre a coluna de 0 até 9
            {
                //Colocomos 0 em cada posição do tabuleiro
                tabuleiro[i][j] = 0;
            }
    }

    //Navio Vertical - Linhas e Colunas Vertical
    int linhaVertical = 5, colunaVertical = 7;


    for (int i = 0; i < tamanho; i++)
    {
        //a linha vai mudar, a coluna não muda
        // tabuleiro[5][7] = 3
        // tabuleiro[6][7] = 3
        // tabuleiro[7][7] = 3
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    //Navio Horizontal - Linhas e Colunas Horizontal
    int linhaHorizontal = 2, colunaHorizontal = 4;

    for (int i = 0; i < tamanho; i++)
    {   
        //a coluna vai mudar dessa vez, e a linha não muda
        // tabuleiro[2][4] = 3
        // tabuleiro[2][5] = 3
        // tabuleiro[2][6] = 3
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    //Navio Diagonal - Linhas e Colunas

    int linhaDiagonal = 4, colunaDiagonal = 2;

    for (int i = 0; i < tamanho; i++)
    {
        //a Linha Diagonal e Coluna Diagonal vão mudando
        //Tabuleiro [4][2] = 3
        //Tabuleiro [5][3] = 3
        //Tabuleiro [6][4] = 3
        tabuleiro[linhaDiagonal + i][colunaDiagonal + i] = 3;
    }

    //Navio Diagonal 2 - Linhas e Colunas

    int linhaDiagonal_2 = 7, colunaDiagonal_2 = 1;

    //a Linha Diagonal e Coluna Diagonal vão mudando
    //Tabuleiro [7][1] = 3
    //Tabuleiro [8][2] = 3
    //Tabuleiro [9][3] = 3
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[linhaDiagonal_2 + i][colunaDiagonal_2 + i] = 3;
    }

    //Imprimindo o Tabuleiro

    //Mostrando a Letras do Tabuleiro
    printf ("   A B C D E F G H I J\n\n");

    //Agora mostramos linha por linha
    //i - linha do tabuleiro de 0 a 9
    for (int i = 0, k = 0; i < 10 && k < 11; i++, k++)
    {
        //k - numero mostrado ao lado da linha
        printf("%d  ", k);

        //Pecorre todas as colunas dessa linha 
        for (int j = 0; j < 10; j++)
        {   
            //Mostra o que tem dentro do tabuleiro naquela posição
            //Se for 0 - vazio
            //Se for 3 - navio
            printf("%d ", tabuleiro[i][j]);
        }

        //Pula para proxima linha na tela
        printf("\n");
    }

    return 0;
}
