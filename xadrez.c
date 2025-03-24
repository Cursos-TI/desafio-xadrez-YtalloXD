#include <stdio.h>

// Movimentação da Rainha:
void movRainha(int rainhaPosicao) {
    int movRainhaX = 0, movRainhaY = 0;
    if (rainhaPosicao > 0) {
        movRainhaX--;
        printf("Rainha: Esquerda (%d, %d)\n", movRainhaX, movRainhaY);
        movRainha(rainhaPosicao - 1);
    }
}

// Movimentação da Torre:
void movTorre(int torrePosicao) {
    int movTorrreX = 0, movTorrreY = 0;
    while (torrePosicao < 5) {
        torrePosicao++, movTorrreX++;
        printf("Torre: Direita (%d, %d)\n", movTorrreX, movTorrreY);
    }
}

// Movimentação do Bispo:
void movBispo(int bispoPosicao) {
    int movBispoX = 0, movBispoY = 0;
    do {
        bispoPosicao++, movBispoY++;
            if (bispoPosicao < 5) {
                movBispoX++;
            }
        printf("Bispo: Diagonal para cima e direita (%d, %d)\n", movBispoX, movBispoY);
    } while (bispoPosicao < 5);
}
    

int main() {

// Movimentação do Cavalo e o seu output dos movimentos:
    int movCavaloX = 0, movCavaloY = 0;
    int movimentoCompletoCavalo = 1;

    printf("\n### CAVALO ###\n");
    while (movimentoCompletoCavalo--) {
        for (movCavaloX = 0, movCavaloY = 0; movCavaloY < 3; movCavaloY++){
        printf("Cavalo: Cima (%d, %d)\n", movCavaloX, movCavaloY);
        }
        movCavaloX++;
        movCavaloY--;
        printf("Cavalo: Direita (%d, %d)\n", movCavaloX, movCavaloY);
    }
    
// Display dos movimentos da Rainha, Torre e Bispo contendo linhas nos printf para separar os movimentos:
    printf("\n### RAINHA ###\n");
    movRainha(1);
    printf("\n### TORRE ###\n");
    movTorre(1);
    printf("\n### BISPO ###\n");
    movBispo(1);

    return 0;
}