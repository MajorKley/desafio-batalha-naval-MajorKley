#include <stdio.h>

#define linhas 10
#define colunas 10
#define posicaoNavios 3 
int main() {

//definir valores para matriz
  int tabuleiro [linhas][colunas];
  int posicao;
    //inicilização das posições
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
        tabuleiro[i][j] = 0;   }
    }
    
    //posicionamentos navio
  tabuleiro [7][5] = posicaoNavios;
  tabuleiro [9][0] = posicaoNavios;
  tabuleiro [2][2] = posicaoNavios;//nnavios na diagonal
  tabuleiro [3][3] = posicaoNavios;//navio na diagonal

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
        printf("%d ", tabuleiro[i][j]);}
  
    printf("\n");
  }

  
                             
    //0 será o número padrão para os indíces que não serão mudados
    // printf("A posição do barco horizontal é: %s \n", tabuleiro[x][0]);
    // printf("A posição do barco vertical é: %s \n", tabuleiro[0][y]);

    
                            

    return 0;
}
