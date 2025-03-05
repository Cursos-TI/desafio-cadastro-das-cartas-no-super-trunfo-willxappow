#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // Desafio Novato  - Tema 2
    // Declaração de Variáveis

    // Variáveis de Carta 01 e Carta 02
    char estado1[3], estado2[3];
    char cod_carta1[5], cod_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area_km1, area_km2;
    float pib1, pib2;
    int num_ponto_turistico1, num_ponto_turistico2;
    float resultado_percapita1, resultado_percapita2;
    double resultado_densidade1, resultado_densidade2;
    int comparar_pop, comparar_pop2;

    // Cadastro das Cartas - Entrada de Dados via scanf
    // Cadastro da Carta 01
    printf("***** Cadastro da Carta 01 *****\n\n");
    printf("Digite a sigla do estado: ");
    scanf("%s", &estado1); // Digite o estado - ex: SP,RJ,RS,SC,MG,TO.....
    printf("Digite o código: ");
    scanf("%s", &cod_carta1); // Digite o código - ex: 01,02,03 ou 04
    getchar();                // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 50, stdin); // Entrada de dados via fgets - digite o nome da cidade.
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';
    printf("Digite a população: ");
    scanf("%d", &populacao1); // Digite a população - ex: 1234567890
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
    scanf("%s", &estado2); // Digite o estado - ex: SP,RJ,RS,SC,MG,TO.....
    printf("Digite o código: ");
    scanf("%s", &cod_carta2); // Digite o código - ex: 01,02,03 ou 04
    getchar();                // Lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 50, stdin); // Entrada de dados via fgets - digite o nome da cidade.
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
    printf("Digite a população: ");
    scanf("%d", &populacao2); // Digite a população - ex: 1234567890
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
    resultado_densidade1 = (float)(populacao1) / (area_km1);
    resultado_densidade2 = (float)(populacao2) / (area_km2);

    // Cálculo PIB Per Capita-Carta 01 e Carta 02
    resultado_percapita1 = (pib1) * 1000000000 / (float)(populacao1);
    resultado_percapita2 = (pib2) * 1000000000 / (float)(populacao2);

    // Saída de Dados via printf - Resultado
    // Dados de Saída da Carta 01
    printf("\n***** Resultado das Cartas *****\n");
    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em Km²: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade1);
    printf("PIB Per Capita: %.2f reais\n", resultado_percapita1);

    // Dados de Saída da Carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade2);
    printf("PIB Per Capita: %.2f reais\n\n", resultado_percapita2);

    // Dados de Comparação das Cartas  - Qual Carta Venceu?
    printf("***** Comparação das Cartas (Atributo: População): *****\n\n");
    printf("Carta 01 - %s (%s) : %d habitantes\n", nome_cidade1, estado1, populacao1);
    printf("Carta 02 - %s (%s) : %d habitantes\n", nome_cidade2, estado2, populacao2);

    // Condição
    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 01 (%s) venceu!\n", estado1);
    }
    else if (populacao1 < populacao2)
    {
        printf("Resultado: Carta 02 (%s) venceu!\n", estado2);
    }
    system("pause");
    return 0;
}
