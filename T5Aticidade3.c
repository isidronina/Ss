#include <stdio.h>

void coletar(float *pista, int *voltas, float *tempo_volta) {
    scanf("%f", pista);
    scanf("%d", voltas);
    scanf("%f", tempo_volta);
}

void processar(float pista, int voltas, float tempo_volta, float *distancia, float *previsao_min) {
    *distancia = (pista * voltas) / 1000.0;
    float tempo_total_seg = tempo_volta * voltas;
    *previsao_min = tempo_total_seg / 60.0;
}

void exibir(float distancia, float previsao_min) {
    printf("Análise Preditiva Concluída\n");
    printf("Distância total a ser percorrida: %.2f km.\n", distancia);
    printf("Previsão de conclusão: %.1f minutos.\n", previsao_min);
}

int main() {
    float pista, tempo_volta, distancia, previsao_min;
    int voltas;
    
    coletar(&pista, &voltas, &tempo_volta);
    processar(pista, voltas, tempo_volta, &distancia, &previsao_min);
    exibir(distancia, previsao_min);
    
    return 0;
}
