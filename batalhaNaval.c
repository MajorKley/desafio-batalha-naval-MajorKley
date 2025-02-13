#include <stdio.h>


int main() {
   //coordenadas x = linhas, y = colunas
   int x = 4,y = 3;
   // linhas serão em letras, colunas em números
   char *tabuleiro [5][5] = {{"a1", "a2", "a3", "a4", "a5"},
                             {"b1", "b2", "b3", "b4", "b5"},
                             {"c1", "c2", "c3", "c4", "c5"},
                             {"d1", "d2", "d3", "d4", "d5"},
                             {"e1", "e2", "e3", "e4", "e5"}};
                             
    //0 será o número padrão para os indíces que não serão mudados
    printf("A posição do barco horizontal é: %s \n", tabuleiro[x][0]);
    printf("A posição do barco vertical é: %s \n", tabuleiro[0][y]);

    
                            

    return 0;
}
