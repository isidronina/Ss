#include <stdio.h>

void coletar_e_processar(float *total, int *parcelas) {
    float valor;
    *total = 0;
    
    while (1) {
        scanf("%f", &valor);
        if (valor == 0) break;
        if (valor < 0) {
            printf("Valor inválido: %.0f\n", valor);
            continue;
        }
        *total += valor;
    }
    
    scanf("%d", parcelas);
}

void exibir(float total, int parcelas) {
    if (parcelas <= 1) {
        printf("Pagamento à vista: R$ %.0f\n", total);
    } else {
        printf("Total da compra: R$ %.0f\n", total);
        printf("Parcelado em %dx de R$ %.2f\n", parcelas, total / parcelas);
    }
}

int main() {
    float total;
    int parcelas;
    
    coletar_e_processar(&total, &parcelas);
    exibir(total, parcelas);
    
    return 0;
}
