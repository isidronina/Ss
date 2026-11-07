#include <stdio.h>

void executar_sistema() {
    int opcao;
    float saldo = 0, valor;
    
    do {
        scanf("%d", &opcao);
        if (opcao == 0) break;
        
        if (opcao == 1) {
            printf("Saldo atual: R$ %.0f\n", saldo);
        } else if (opcao == 2) {
            scanf("%f", &valor);
            if (valor < 0) {
                printf("Valor inválido\n");
            } else {
                saldo += valor;
            }
        } else if (opcao == 3) {
            scanf("%f", &valor);
            if (valor < 0) {
                printf("Valor inválido\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente\n");
            } else {
                saldo -= valor;
            }
        } else {
            printf("Opção inválida\n");
        }
    } while (opcao != 0);
}

int main() {
    executar_sistema();
    return 0;
}
