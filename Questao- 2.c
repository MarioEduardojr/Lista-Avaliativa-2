#include <stdio.h>
#include <string.h>

double calcular_Forca_Ponderada(char nome_do_Time[50], double forca[11]) {
    double forcaTime = 0;
    double G = forca[0];
    double L1 = forca[1];
    double L2 = forca[4];
    double Z1 = forca[2];
    double Z2 = forca[3];
    double V1 = forca[5];
    double V2 = forca[6];
    double M1 = forca[7];
    double M2 = forca[8];
    double A1 = forca[9];
    double A2 = forca[10];

    forca_do_Time = (8 * G + 10 * (L1 + L2) + 5 * (Z1 + Z2) + 8 * (V1 + V2) + 11 * (M1 + M2) + 12 * (A1 + A2)) / 100;

    return forca_do_Time;

}

 double forca_Ponderada_do_Time1 = calcular_Forca_Ponderada(nome_do_Time1, forcas_do_Time1);
    double forca_Ponderada_do_Time2 = calcular_Forca_Ponderada(nome_do_Time2, forcas_do_Time2);

    printf("%s: %.2lf de forca\n", nome_do_Time1, forca_Ponderada_do_Time1);
    printf("%s: %.2lf de forca\n", nome_do_Time2, forca_Ponderada_do_Time2);

    if (forca_Ponderada_do_Time1 > forca_Ponderada_do_Time2) {
        printf("%s eh mais forte\n", nome_do_Time1);
    } else if (forcaPonderadaTime2 > forca_Ponderada_do_Time1) {
        printf("%s eh mais forte\n", nome_do_Time2);
    }

int main() {
    char nome_do_Time1[50], nome_do_Time2[50];
    double forcas_do_Time1[11] = {0};
    double forcas_do_Time2[11] = {0};
    int jogador_Index = 0;
    char linha[100];

    while (jogador_Index < 24) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0';
        if (linha[0] == '\0') {
            break;
        }

        if (jogador_Index == 0) {
            strcpy(nome_do_Time1, linha);
        } else if (jogador_Index == 12) {
            strcpy(nome_do_Time2, linha);
        } else {
            char nome[50], posicao;
            double forca;
            sscanf(linha, "%[^;];%c;%lf", nome, &posicao, &forca);

            if (jogador_Index <= 11) {
                forcas_do_Time1[jogador_Index - 1] = forca;
            } else {
                forcas_do_Time2[jogador_Index - 12 - 1] = forca;
            }
        }

        jogadorIndex++;
    }

    return 0;
}
