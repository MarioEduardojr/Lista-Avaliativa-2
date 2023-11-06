#include <stdio.h>

float calcularForcaPonderada(char nomeTime[], int forcaJogadores[]) {
    float G = forcaJogadores[0];
    float L1 = forcaJogadores[1];
    float L2 = forcaJogadores[2];
    float Z1 = forcaJogadores[3];
    float Z2 = forcaJogadores[4];
    float V1 = forcaJogadores[5];
    float V2 = forcaJogadores[6];
    float M1 = forcaJogadores[7];
    float M2 = forcaJogadores[8];
    float A1 = forcaJogadores[9];
    float A2 = forcaJogadores[10];

    float F = (8 * G + 10 * (L1 + L2) + 5 * (Z1 + Z2) + 8 * (V1 + V2) + 11 * (M1 + M2) + 12 * (A1 + A2)) / 100.0;

    printf("%s: %.2f\n", nomeTime, F);

    return F;
}

int main() {
    char nomeTime1[31], nomeTime2[31];
    int forcaJogadoresTime1[10], forcaJogadoresTime2[10];

    printf("Digite o nome do Time 1: ");
    scanf("%30[^\n]%*c", nomeTime1);

    for (int i = 0; i < 11; i++) {
        char nomeJogador[31];
        char posicao;
        int forca;

        printf("Digite o nome, posicao e forca do jogador %d (separados por ';'): ", i + 1);
        scanf("%30[^;];%c;%d%*c", nomeJogador, &posicao, &forca);

        if (posicao == 'G') {
            if (forca >= 1 && forca <= 99) {
                forcaJogadoresTime1[0] = forca;
            } else {
                printf("Forca do jogador fora do intervalo valido (1-99).\n");
                return 1;
            }
        } else if (posicao == 'L' || posicao == 'Z' || posicao == 'V' || posicao == 'M' || posicao == 'A') {
            if (forca >= 1 && forca <= 99) {
                forcaJogadoresTime1[i] = forca;
            } else {
                printf("Forca do jogador fora do intervalo valido (1-99).\n");
                return 1;
            }
        } else {
            printf("Posicao do jogador invalida (G, L, Z, V, M ou A).\n");
            return 1;
        }
    }
    
    printf("Digite o nome do Time 2: ");
    scanf("%30[^\n]%*c", nomeTime2);

    for (int i = 0; i < 11; i++) {
        char nomeJogador[31];
        char posicao;
        int forca;

        printf("Digite o nome, posicao e forca do jogador %d (separados por ';'): ", i + 1);
        scanf("%30[^;];%c;%d%*c", nomeJogador, &posicao, &forca);

        if (posicao == 'G') {
            if (forca >= 1 && forca <= 99) {
                forcaJogadoresTime2[0] = forca;
            } else {
                printf("Forca do jogador fora do intervalo válido (1-99).\n");
                return 1;
            }
        } else if (posicao == 'L' || posicao == 'Z' || posicao == 'V' || posicao == 'M' || posicao == 'A') {
            if (forca >= 1 && forca <= 99) {
                forcaJogadoresTime2[i] = forca;
            } else {
                printf("Forca do jogador fora do intervalo válido (1-99).\n");
                return 1;
            }
        } else {
            printf("Posicao do jogador invalida (G, L, Z, V, M ou A).\n");
            return 1;
        }
    }

    float forcaTime1 = calcularForcaPonderada(nomeTime1, forcaJogadoresTime1);
    float forcaTime2 = calcularForcaPonderada(nomeTime2, forcaJogadoresTime2);

    if (forcaTime1 > forcaTime2) {
        printf("O Time 1 é o mais forte.\n");
    } else if (forcaTime2 > forcaTime1) {
        printf("O Time 2 é o mais forte.\n");
    } else {
        printf("Os dois times têm a mesma força.\n");
    }

    return 0;
}
