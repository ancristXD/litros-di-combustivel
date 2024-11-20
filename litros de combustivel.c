#include <stdio.h>

int main() {
    // Declaração das variáveis
    float tempo, velocidade, distancia, litros_usados;

    // Solicita ao usuário o tempo gasto na viagem
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    // Solicita ao usuário a velocidade média durante a viagem
    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // Calcula a distância percorrida
    distancia = tempo * velocidade;

    // Calcula a quantidade de litros de combustível usados
    litros_usados = distancia / 12.0; // O carro faz 12 km por litro

    // Exibe os resultados
    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros de combustível usada: %.2f litros\n", litros_usados);

    return 0;
}
