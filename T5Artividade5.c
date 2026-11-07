#include <stdio.h>
#include <string.h>

void coletar(char curso[], char isento[], float *desconto) {
    scanf("%s", curso);
    scanf("%s", isento);
    scanf("%f", desconto);
}

void processar_e_exibir(char curso[], char isento[], float desconto) {
    float valor = 0;
    
    if (strcmp(curso, "SI") == 0) {
        valor = 900.00;
    } else if (strcmp(curso, "ADS") == 0) {
        valor = 750.00;
    } else if (strcmp(curso, "CS") == 0) {
        valor = 1150.00;
    } else if (strcmp(curso, "EC") == 0) {
        valor = 1300.00;
    } else if (strcmp(curso, "ES") == 0) {
        valor = 950.00;
    } else {
        printf("Curso não encontrado\n");
        return;
    }
    
    if (strcmp(isento, "Sim") == 0) {
        valor = 0;
    } else {
        valor = valor - (valor * (desconto / 100.0));
    }
    
    printf("Valor da mensalidade:\nR$ %.2f\n", valor);
}

int main() {
    char curso[10], isento[10];
    float desconto;
    
    coletar(curso, isento, &desconto);
    processar_e_exibir(curso, isento, desconto);
    
    return 0;
}
