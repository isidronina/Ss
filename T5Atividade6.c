#include <stdio.h>
#include <string.h>

void coletar(int *inteiras, int *meias, char dia[], char nacional[]) {
    scanf("%d", inteiras);
    scanf("%d", meias);
    scanf("%s", dia);
    scanf("%s", nacional);
}

void processar(int inteiras, int meias, char dia[], char nacional[], float *total) {
    if (strcmp(nacional, "Sim") == 0) {
        *total = (inteiras + meias) * 5.00;
    } else if (strcmp(dia, "Quarta-feira") == 0) {
        *total = (inteiras + meias) * 14.50;
    } else {
        *total = (inteiras * 28.50) + (meias * (28.50 / 2.0));
    }
}

void exibir(float total) {
    printf("Total à pagar:\nR$ %.2f\n", total);
}

int main() {
    int inteiras, meias;
    char dia[20], nacional[10];
    float total;
    
    coletar(&inteiras, &meias, dia, nacional);
    processar(inteiras, meias, dia, nacional, &total);
    exibir(total);
    
    return 0;
}
