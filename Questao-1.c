#include <stdio.h>

int somaVetores(int valores[], int tamanho) {
    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            valores[i] = valores[i] + valores[i + 1];
        }
        tamanho--;
        for (int i = 0; i < tamanho; i++) {
            printf("%d", valores[i]);
            if (i < tamanho - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return valores[0]; 
}

int main() {
    int conjuntodevalores[10];
    int elementos = 10;

    for (int i = 0; i < elementos; i++) {
        scanf("%d", &conjuntodevalores[i]);
    }

    for (int i = 0; i < elementos; i++) {
        printf("%d", conjuntodevalores[i]);
        if (i < elementos - 1) {
            printf(" ");
        }
    }
    printf("\n");

    int resultado_final = somaVetores(conjuntodevalores, elementos);
    printf("Resultado Final: %d\n", resultadofinal);

    return 0;
}
