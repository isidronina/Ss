#include <stdio.h>

void coletar_dados(int *n, float fat[]) {
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        scanf("%f", &fat[i]);
    }
}

void processar_e_exibir(int n, float fat[]) {
    int cresceu = 1, caiu = 1, constante = 1;
    
    for (int i = 1; i < n; i++) {
        if (fat[i] < fat[i - 1]) cresceu = 0;
        if (fat[i] > fat[i - 1]) caiu = 0;
        if (fat[i] != fat[i - 1]) constante = 0;
    }
    
    printf(">> Análise de Faturamento <<\n");
    printf("Faturamento informado: ");
    for (int i = 0; i < n; i++) {
        printf("%.0f", fat[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nSituação: ");
    
    if (constante) {
        printf("Constante\n");
    } else if (cresceu) {
        printf("Crescimento\n");
    } else if (caiu) {
        printf("Queda\n");
    } else {
        printf("Sem padrão\n");
    }
}

int main() {
    int n;
    float fat[100];
    
    coletar_dados(&n, fat);
    processar_e_exibir(n, fat);
    
    return 0;
}
