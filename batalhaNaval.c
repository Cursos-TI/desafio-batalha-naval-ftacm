#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Gera o tabuleiro com 0 em todas as casas
    int tabuleiro[10][10];
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }
    //imprime o tabuleiro gerado vazio
    printf("Tabuleiro Vazio:\n");
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\nPosicionando navio vertical:\n");
    // Escolhe um ponto horizontal único para colocar o navio e percorre 3 casas na vertical
    for (int i=2;i<5;i++){
        for (int j=0;j<10;j++){
            tabuleiro[i][1] = 3;
        }
    }
    // Imprime o tabuleiro com as novas alterações
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
     printf("\nPosicionando navio horizontal:\n");
     // Escolhe um ponto vertical único para colocar o navio e percorre 3 casas na horizontal
    for (int i=0;i<10;i++){
        for (int j=1;j<4;j++){
            tabuleiro[0][j] = 3;
        }
    }
    // Imprime o tabuleiro com as novas alterações
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\nPosicionando navios na diagonal:\n");
    // Escolhe um quadrado com 9 casas para ser preenchido, 3 a 5 e 6 a 8
    for (int i=3;i<6;i++){
        for (int j=6;j<9;j++){
            // Condição if para preencher com 3 se e somente se a casa coincidir com o preenchimento diagonal, i sempre sendo j-3
            if (i=j-3){
            tabuleiro[i][j] = 3;
            } else {
                tabuleiro[i][j] = 0;
            }
        }
    }
    // Escolhe um quadrado com 9 casas para ser preenchido, 5 a 7 e 6 a 8
    for (int i=5;i<8;i++){
        for (int j=6;j<9;j++){
            // Condição if para preencher com 3 se e somente se a casa coincidir com o preenchimento diagonal, i sempre sendo j-1
            if (i=j-1){
            tabuleiro[i][j] = 3;
            } else {
                tabuleiro[i][j] = 0;
            }
        }
    }
    //imprime o tabuleiro com os navios na diagonal
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\nAcionando Habilidade Cruz:\n");
    // Gera o número 1 em todas as casas verticais na altura 5 horizontal
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            tabuleiro[i][5] = 1;
        }
    }
    // Gera o número 1 em todas as casas horizontais na altura 4 vertical
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            tabuleiro[4][j] = 1;
        }
    }
    // Imprime o tabuleiro com as alterações
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}