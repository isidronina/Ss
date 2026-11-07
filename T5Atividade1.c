#include <stdio.h>

void coletar(int *p, int *m, int *g, float *desconto) {
    scanf("%d", p);
    scanf("%d", m);
    scanf("%d", g);
    scanf("%f", desconto);
}

void processar(int p, int m, int g, float desconto, float *total) {
    float val_p = p * 13.50;
    float val_m = m * 15.00;
    float val_g = g * 17.50;
    float subtotal = val_p + val_m + val_g;
    *total = subtotal - (subtotal * (desconto / 100.0));
}

void exibir(int p, int m, int g, float desconto, float total) {
    printf("Seu pedido foi registrado.\n");
    printf("- Açaí P: %d\n", p);
    printf("- Açaí M: %d\n", m);
    printf("- Açaí G: %d\n", g);
    printf("Desconto de %.0f%% aplicado.\n", desconto);
    printf("Total R$ %.2f\n", total);
}

int main() {
    int p, m, g;
    float desconto, total;
    
    coletar(&p, &m, &g, &desconto);
    processar(p, m, g, desconto, &total);
    exibir(p, m, g, desconto, total);
    
    return 0;
}
