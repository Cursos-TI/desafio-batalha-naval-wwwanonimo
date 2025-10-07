#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(){

    //Criando um tabuleiro 10x10 
    int tabuleiro[LINHA][COLUNA];
    int tamanho = 3;
    //Prenchendo o Tabuleiro com o numero 0 em todas as posições
    
    for (int i = 0; i < LINHA; i++)//i = percorre a linhas de 0 até 9
    {
        for (int j = 0; j < COLUNA; j++)//j = percorre a coluna de 0 até 9
            {
                //Colocomos 0 em cada posição do tabuleiro
                tabuleiro[i][j] = 0;
            }
    }

    //-----Navio Vertical-----
    int linhaVertical = 5, colunaVertical = 7;


    for (int i = 0; i < tamanho; i++)
    {
        //a linha vai mudar, a coluna não muda
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    //-----Navio Horizontal-----
    int linhaHorizontal = 2, colunaHorizontal = 4;

    for (int i = 0; i < tamanho; i++)
    {   
        //a coluna vai mudar dessa vez, e a linha não muda
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    //-----Navio Diagonal-----
    int linhaDiagonal = 4, colunaDiagonal = 2;

    for (int i = 0; i < tamanho; i++)
    {
        //a Linha Diagonal e Coluna Diagonal vão mudando

        tabuleiro[linhaDiagonal + i][colunaDiagonal + i] = 3;
    }

    //-----Navio Diagonal2----- 
    int linhaDiagonal_2 = 7, colunaDiagonal_2 = 1;

    for (int i = 0; i < tamanho; i++)
    {
        //a Linha Diagonal e Coluna Diagonal vão mudando
        tabuleiro[linhaDiagonal_2 + i][colunaDiagonal_2 + i] = 3;
    }

    //-----Habilidades-----

    //Cone
    int cone_linhas[3] = {9, 8, 7};
    int cone_colunas[3] = {5, 6, 7};
    int cone_tamanhos[3] = {5, 3, 1};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < cone_tamanhos[i]; j++)
        {
        tabuleiro[cone_linhas[i]][cone_colunas[i] + j] = 5;
        }
    }

    //Cruz
    int cruz_linha[2] = {0, 5};
    int cruz_coluna[2] = {4, 0};
    int tamanho_cruz[2] = {10, 10};

    for (int i = 0; i < 2; i++)
    {   
        for (int j = 0; j < tamanho_cruz[i]; j++)
        {
            if (i == 0)
            {
                tabuleiro[cruz_linha[i] + j] [cruz_coluna[i]] = 5; //Vertical
            } else{
                tabuleiro[cruz_linha[i]] [cruz_coluna[i] + j] = 5; //Horizontal
            }
            
        }
      
    }
    //Octaedro
    int octaedro_linha [3] = {2, 1, 3};
    int octaedro_coluna [3] = {7, 8, 8};
    int tamanho_octaedro [3] = {3, 1, 1};

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < tamanho_octaedro[i]; j++)
        {
             tabuleiro[octaedro_linha[i]][octaedro_coluna[i] + j] = 5;
        }
    }
    //-----IMPRIMINDO CÓDIGO-----

    printf ("   A B C D E F G H I J\n\n");

    //i - linha do tabuleiro de 0 a 9
    for (int i = 0, k = 0; i < LINHA && k < 11; i++, k++)
    {
        //k - numero mostrado ao lado da linha
        printf("%d  ", k);

        for (int j = 0; j < COLUNA; j++)
        {   
            //Mostra o que tem dentro do tabuleiro naquela posição
            //Se for 0 - vazio
            //Se for 3 - navio
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    

    return 0;
}
