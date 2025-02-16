#include <stdio.h>


int main(){

      // Declaração de Váriaveis

      char estado;
      char cod_carta[3];
      char nome_cidade[30];
      int populacao;
      float area_km;
      float pib;
      int num_ponto_turistico;
  

    // Cabeçalho do Jogo

    printf("*****************************\n");

    // Cadastro da Carta
    printf("***** Cadastro da Carta *****\n\n");

    printf("Digite o estado(A-B-C-D-E-F-G-H): ");
    scanf("%c", &estado);

    printf("Digite o código(01-02-03-04): ");
    scanf("%s", &cod_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite a população(1234567): ");
    scanf("%lu", &populacao);

    printf("Digite a área em Km²(1.234): ");
    scanf("%f", &area_km);

    printf("Digite o Pib(1.234): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos(12): ");
    scanf("%d", &num_ponto_turistico);

    // Saída de Dados - Dados das Cartas Cadastradas
    printf("***************Resultado das Cartas***************\n\n");
    printf("Informações da Carta\n\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %c%s\n", estado, cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Área em Km²: %.2f km²\n", area_km);
    printf("PIB: %.2f Milhôes de reais \n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico);

    //Aviso de Carta Cadastrada com Sucesso
    printf("\nCarta cadastrada com sucesso!\n");

    
    return 0;
}