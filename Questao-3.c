#include <stdio.h>

int main() {
    int A[4][4], B[4][4], result[4][4];
    char operacao[5];
    
    // Leitura da matriz A
   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Leitura da matriz B
   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    // Leitura da operação

    scanf("%s", operacao);
    
    // Realização da operação e cálculo da matriz resultante
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (operacao[0] == 'soma') {
                result[i][j] = A[i][j] + B[i][j];
            } else if (operacao[0] == 'sub') {
                result[i][j] = A[i][j] - B[i][j];
            } else if (operacao[0] == 'mult') {
                result[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    // Exibição da matriz resultante formatada
  
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}