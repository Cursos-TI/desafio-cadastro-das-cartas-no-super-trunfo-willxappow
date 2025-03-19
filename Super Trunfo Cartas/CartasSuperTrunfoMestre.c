#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // Desafio Mestre  - Tema 1
    // Declaração de Variáveis
    // Variáveis de Carta 01 e Carta 02

    char estado1, estado2;
    char cod_carta1[3], cod_carta2[3];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2;
    float pib1, pib2;
    int num_ponto_turistico1, num_ponto_turistico2;
    float resultado_percapita1, resultado_percapita2;
    double resultado_densidade1, resultado_densidade2;
    double super_poder1, super_poder2;
    double inverso_densidade1, inverso_densidade2;
    int carta02_populacao, carta02_area, carta02_pib, carta02_pontoturistico,
    carta02_inversodensidade, carta02_pibpercapita, carta02_superpoder;

    // Cadastro das Cartas - Entrada de Dados via scanf
    // Cadastro da Carta 01
    printf("***** Cadastro da Carta 01 *****\n\n");
    printf("Digite o estado: ");
    scanf("%c", &estado1); // Digite o estado - ex: A,B,C,D,E,F,G ou H
    printf("Digite a sigla do código: ");
    scanf("%s", &cod_carta1); // Digite o código - ex: 01,02,03 ou 04
    getchar(); // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 50, stdin); // Entrada de dados via fgets - digite o nome da cidade
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';
    printf("Digite a população: ");
    scanf("%lu", &populacao1); // Digite a população - ex: 1234567890
    printf("Digite a área em Km²: ");
    scanf("%f", &area_km1); // Digite a área em Km² - ex: 1234.5
    printf("Digite o Pib: ");
    scanf("%f", &pib1); // Digite o PIB - ex: 123.45
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico1); // Digite o número de pontos turisticos - ex: 12

    // Aviso de Carta Cadastrada com Sucesso
    printf("\n***** Carta 01 - Cadastrada com Sucesso! *****\n");

    getchar(); // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado

    // Cadastro da Carta 02 - Entrada de Dados via scanf
    printf("\n***** Cadastro da Carta 02 *****\n\n");
    printf("Digite a sigla do estado: ");
    scanf("%c", &estado2); // Digite o estado - ex: A,B,C,D,E,F,G ou H
    printf("Digite o código: ");
    scanf("%s", &cod_carta2); // Digite o código - ex: 01,02,03 ou 04
    getchar(); // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 50, stdin); // Entrada de dados via fgets - digite o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    printf("Digite a população: ");
    scanf("%lu", &populacao2); // Digite a população - ex: 1234567890
    printf("Digite a área em Km²: ");
    scanf("%f", &area_km2); // Digite a área em Km² - ex: 1234.5
    printf("Digite o Pib: ");
    scanf("%f", &pib2); // Digite o PIB - ex: 123.45
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico2); // Digite o número de pontos turisticos - ex: 12

    // Aviso de Carta Cadastrada com Sucesso
    printf("\n***** Carta 02 - Cadastrada com Sucesso! *****\n");
    
    getchar(); // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado

    // Cálculos Densidade Populacional - Carta 01 e Carta 02
    resultado_densidade1 = (float)(populacao1 / area_km1);
    resultado_densidade2 = (float)(populacao2 / area_km2);

    // Cálculo PIB Per Capita-Carta 01 e Carta 02
    resultado_percapita1 = (float)(pib1 * 1000000000 / populacao1);
    resultado_percapita2 = (float)(pib2 * 1000000000 / populacao2);

    // Saída de Dados via printf - Resultado
    // Dados de Saída da Carta 01
    printf("\n***** Resultado das Cartas *****\n");
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em Km²: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade1);
    printf("PIB Per Capita: %.2f reais\n", resultado_percapita1);

    // Dados de Saída da Carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em Km²: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade2);
    printf("PIB Per Capita: %.2f reais\n\n", resultado_percapita2);

    // Cálculo do Inverso da Densidade Populacional
    inverso_densidade1 = (1.0 / resultado_densidade1);
    inverso_densidade2 = (1.0 / resultado_densidade2);

    // Cálculo Soma de todos atributos do Super Poder das Cartas 01 e 02
    super_poder1 = (double)(populacao1 + area_km1 + pib1 + num_ponto_turistico1 + resultado_percapita1 + inverso_densidade1);
    super_poder2 = (double)(populacao2 + area_km2 + pib2 + num_ponto_turistico2 + resultado_percapita2 + inverso_densidade2);

    // Cálculo Saída V = Carta 01 = 1 e F = Carta 02 = 0.
    carta02_populacao = (populacao1 > populacao2) + (populacao1 < populacao2) * 2;
    carta02_area = (area_km1 > area_km2) + (area_km1 < area_km2) * 2;
    carta02_pib = (pib1 > pib2) + (pib1 < pib2) * 2;
    carta02_pontoturistico = (num_ponto_turistico1 > num_ponto_turistico2) +
                                 (num_ponto_turistico1 < num_ponto_turistico2) * 2;
    carta02_inversodensidade = (inverso_densidade1 < inverso_densidade2) +
                               (inverso_densidade1 > inverso_densidade2) * 2;
    carta02_pibpercapita = (resultado_percapita1 > resultado_percapita2) +
                               (resultado_percapita1 < resultado_percapita2) * 2;
    carta02_superpoder = (super_poder1 > super_poder2) + (super_poder1 < super_poder2) * 2;

    // Dados de Comparação das Cartas  - Qual Carta Venceu?
    printf("***** Comparação das Cartas *****\n\n");
    printf("População: Carta 0%d venceu(%d)\n", carta02_populacao, (populacao1 > populacao2));
    printf("Área: Carta 0%d venceu(%d)\n", carta02_area, (area_km1 > area_km2));
    printf("PIB: Carta 0%d venceu(%d)\n", carta02_pib, (pib1 > pib2));
    printf("Pontos Turísticos: Carta 0%d venceu(%d)\n", carta02_pontoturistico , (num_ponto_turistico1 > num_ponto_turistico2));
    printf("Densidade Populacional: Carta 0%d venceu(%d)\n", carta02_inversodensidade, (inverso_densidade1 < inverso_densidade2));
    printf("PIB per Capita: Carta 0%d venceu(%d)\n", carta02_pibpercapita, (resultado_percapita1 > resultado_percapita2));
    printf("Super Poder: Carta 0%d venceu(%d)\n\n", carta02_superpoder, (super_poder1 > super_poder2));

    // Dados extras apenas para verificar valores e Comparar 
    printf("***** Dados apenas para Comparação *****\n\n");
    printf("Inverso da Densidade Populacional - Carta 01: %.6f km² por pessoa\n", inverso_densidade1);
    printf("Inverso da Densidade Populacional - Carta 02: %.6f km² por pessoa\n", inverso_densidade2);
    printf("Super Poder Carta 01: %.2f\n", super_poder1);
    printf("Super Poder Carta 02: %.2f\n", super_poder2);

    
    return 0;
}
