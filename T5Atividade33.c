#include <stdio.h>

void coletar(char meta[], float *valor_meta, float *salario, float *despesas) {
    scanf(" %[^\n]s", meta);
    scanf("%f", valor_meta);
    scanf("%f", salario);
    scanf("%f", despesas);
}

void processar(float salario, float despesas, float valor_meta, float *saldo, float *reserva, float *disponivel, float *meses) {
    *saldo = salario - despesas;
    *reserva = *saldo * 0.30;
    *disponivel = *saldo - *reserva;
    *meses = valor_meta / *disponivel;
}

void exibir(char meta[], float valor_meta, float salario, float despesas, float saldo, float reserva, float disponivel, float meses) {
    printf("Meta: %s (R$ %.2f)\n", meta, valor_meta);
    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n", salario, despesas);
    printf("Saldo após despesas: R$ %.2f\n", saldo);
    printf("Reserva fixa (30%%): R$ %.2f\n", reserva);
    printf("Valor disponível para a meta: R$ %.2f por mês\n", disponivel);
    printf("Prazo estimado para atingir a meta: %.2f meses\n", meses);
}

int main() {
    char meta[100];
    float valor_meta, salario, despesas, saldo, reserva, disponivel, meses;
    
    coletar(meta, &valor_meta, &salario, &despesas);
    processar(salario, despesas, valor_meta, &saldo, &reserva, &disponivel, &meses);
    exibir(meta, valor_meta, salario, despesas, saldo, reserva, disponivel, meses);
    
    return 0;
}
