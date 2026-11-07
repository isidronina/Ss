#include <stdio.h>
#include <string.h>
#include <math.h>

void coletar(float *v1, float *v2, char op[]) {
    scanf("%f", v1);
    scanf("%f", v2);
    scanf("%s", op);
}

void processar(float v1, float v2, char op[]) {
    if (strcmp(op, "1") == 0 || strcasecmp(op, "Soma") == 0) {
        printf("%.1f + %.1f = %.1f\n", v1, v2, v1 + v2);
    } else if (strcmp(op, "2") == 0 || strcasecmp(op, "Subtração") == 0 || strcasecmp(op, "Subtracao") == 0) {
        printf("%.1f - %.1f = %.1f\n", v1, v2, v1 - v2);
    } else if (strcmp(op, "3") == 0 || strcasecmp(op, "Multiplicação") == 0 || strcasecmp(op, "Multiplicacao") == 0) {
        printf("%.1f * %.1f = %.1f\n", v1, v2, v1 * v2);
    } else if (strcmp(op, "4") == 0 || strcasecmp(op, "Divisão") == 0 || strcasecmp(op, "Divisao") == 0) {
        printf("%.1f / %.1f = %.1f\n", v1, v2, v1 / v2);
    } else if (strcmp(op, "5") == 0 || strcasecmp(op, "Resto") == 0) {
        int r = (int)v1 % (int)v2;
        printf("%.1f mod %.1f = %.1f\n", v1, v2, (float)r);
    } else if (strcmp(op, "6") == 0 || strcasecmp(op, "Potência") == 0 || strcasecmp(op, "Potencia") == 0) {
        printf("%.1f ^ %.1f = %.1f\n", v1, v2, pow(v1, v2));
    } else {
        printf("Operação não suportada\n");
    }
}

int main() {
    float v1, v2;
    char op[20];
    
    coletar(&v1, &v2, op);
    processar(v1, v2, op);
    
    return 0;
}
