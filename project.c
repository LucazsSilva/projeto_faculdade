#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definicão das variaveis so sistema: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20];
    char codigo_cidade[20];
    char nome_cidade[20];
    int populacao;
    float area_km;
    float pib;   
    int numero_ponto_turistico;

    // Recebendo a entrada do usuarios com as informacoes de cada estado.
    printf("Informe o nome do estado: \n");
    scanf("%s", &estado);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", &codigo_cidade);
    printf("Informe o nome da cidade: \n");
    scanf("%s", &nome_cidade);
    printf("Informe o numero da populacao: \n");
    scanf("%d", &populacao);
    printf("Informe o a area em km quadrado: \n");
    scanf("%.2f", &area_km);
    printf("Informe o pib do estado: \n");
    scanf("%.2f", &pib);
    printf("Informe o numero de pontos turisticos do estado: \n");
    scanf("%d", &numero_ponto_turistico);

    // Exibindo os dados informados pelo usuarios
    printf("Nome do estado: %s\n", estado);
    printf("Codigo da cidade: %s\n", codigo_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Numero da populacao: %d\n", populacao);
    printf("Area em km: %f\n", area_km);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n");

    return 0;
}
