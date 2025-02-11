#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50] = "São Paulo";
    char carta[4] = "A00";
    char cidade[50] = "Itapevi";
    int populacao = 50000;
    float area = 555555;
    float pib = 1516532;
    int num_pontos_tur = 6;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %d \nÁrea em km²: %.2f km² \nPIB: R$%.2f \nNúmero de pontos turísticos: %d \n", estado, carta, cidade, populacao, area, pib, num_pontos_tur);

    return 0;
}
