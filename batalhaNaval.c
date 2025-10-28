#include <stdio.h>

int main() {
    printf ("Desafio Batalha Naval\n");
    
    // Definindo o tamanho do tabuleiro (exemplo: 10x10)
    int tabuleiro[10][10] = {0};

    // POSICIONAMENTO DOS NAVIOS
   
    // Navio 1 - Vertical (ocupa 4 posições)
    int navio1_inicio_x = 2;
    int navio1_inicio_y = 3;

    printf("Navio 1 (Vertical):\n");
    for (int i = 0; i < 4; i++) {
        int x = navio1_inicio_x + i;  // muda linha (vertical)
        int y = navio1_inicio_y;
        tabuleiro[x][y] = 1; // marca posição do navio no tabuleiro
        printf("Parte %d -> Coordenada: (%d, %d)\n", i + 1, x, y);
    }

    // Navio 2 - Horizontal (ocupa 5 posições)
    int navio2_inicio_x = 6;
    int navio2_inicio_y = 1;

    printf("\nNavio 2 (Horizontal):\n");
    for (int i = 0; i < 5; i++) {
        int x = navio2_inicio_x;
        int y = navio2_inicio_y + i;  // muda coluna (horizontal)
        tabuleiro[x][y] = 2; // marca posição do navio no tabuleiro
        printf("Parte %d -> Coordenada: (%d, %d)\n", i + 1, x, y);
    }


    // EXIBIÇÃO DO TABULEIRO (Opcional)

    printf("\nTabuleiro (visualização simplificada):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}