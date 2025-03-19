#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // Desafio Mestre  - Tema 2
    // Declaração de Variáveis
    // Variáveis de Carta 01 e Carta 02
    char nome_pais1[50], nome_pais2[50];
    char estado1[3], estado2[3];
    char cod_carta1[5], cod_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1 = 0, populacao2;
    float area_km1, area_km2;
    float pib1, pib2;
    int num_ponto_turistico1, num_ponto_turistico2;
    float resultado_percapita1, resultado_percapita2;
    int menu_principal, sub_menu;
    double inverso_densidade1, inverso_densidade2, resultado_densidade1, resultado_densidade2;

    // Início do Jogo Super Trunfo
    printf("\n**********************************************\n");
    printf("************** Jogo Super Trunfo *************\n");
    printf("**********************************************\n\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Escolher atributo para Comparação\n");
    printf("3. Sair\n");
    printf("\nEscolha uma opção..:");
    scanf("%d", &menu_principal);
    getchar();

    switch (menu_principal)
    {

    case 1:

        // Cadastro das Cartas - Entrada de Dados via scanf
        // Cadastro da Carta 01
        printf("\n**********************************\n");
        printf("********* Início do Jogo *********\n");
        printf("**********************************\n");
        printf("\n**********************************\n");
        printf("****** Cadastro da Carta 01 ******\n");
        printf("**********************************\n\n");

        printf("Digite o nome do país: ");
        fgets(nome_pais1, 50, stdin); // Entrada de dados via fgets - digite o nome da cidade.
        nome_pais1[strcspn(nome_pais1, "\n")] = '\0';
        printf("Digite a sigla do estado: ");
        scanf("%s", &estado1); // Digite o estado - ex: SP,RJ,RS,SC,MG,TO.....
        printf("Digite o código: ");
        scanf("%s", &cod_carta1); // Digite o código - ex: 01,02,03 ou 04
        getchar();
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
        printf("\n>>>>>> Carta 01 - Cadastrada com Sucesso! <<<<<<\n");
        getchar();

        // Cadastro da Carta 02 - Entrada de Dados via scanf
        printf("\n**********************************\n");
        printf("****** Cadastro da Carta 02 ******\n");
        printf("**********************************\n\n");

        printf("Digite o nome do país: "); // Digite o  País
        fgets(nome_pais2, 50, stdin);      // Entrada de dados via fgets - digite o nome da cidade.
        nome_pais2[strcspn(nome_pais2, "\n")] = '\0';
        printf("Digite a sigla do estado: ");
        scanf("%s", &estado2); // Digite o estado - ex: SP,RJ,RS,SC,MG,TO.....
        printf("Digite o código: ");
        scanf("%s", &cod_carta2); // Digite o código - ex: 01,02,03 ou 04
        getchar();
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
        printf("\n>>>>>> Carta 02 - Cadastrada com Sucesso! <<<<<<\n");

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
        printf("Nome do País: %s\n", nome_pais1);
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
        printf("Nome do País: %s\n", nome_pais2);
        printf("Estado: %s\n", estado2);
        printf("Código da Carta: %s%s\n", estado2, cod_carta2);
        printf("Nome da Cidade: %s\n", nome_cidade2);
        printf("População: %d\n", populacao2);
        printf("Área em Km²: %.2f km²\n", area_km2);
        printf("PIB: %.2f bilhões de reais \n", pib2);
        printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade2);
        printf("PIB Per Capita: %.2f reais\n\n", resultado_percapita2);

    case 2:

        // SubMenu Escolha dos atributos para Comparação
        printf("\n*********************************************************************\n");
        printf("******* Escolha qual atributo das Cartas você deseja Comparar *******\n");
        printf("*********************************************************************\n\n");
        printf("1. População\n");
        printf("2. Área em Km²\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("6. Voltar ao Menu Principal \n");
        printf("\nEscolha uma opção..:");
        scanf("%d", &sub_menu);

        // SubMenu para escolha de Atributo para comparação
        switch (sub_menu)
        {
        case 1:

            // Resultado da Comparação - Atributo População
            printf("\n*******************************************************************************\n");
            printf("*** Resultado das Comparações das Cartas - Opção - 1 - Atributo [População] ***\n");
            printf("*******************************************************************************\n");
            printf("\nNome do País - Carta 01: %s\n", nome_pais1);
            printf("Nome do País - Carta 02: %s\n", nome_pais2);
            printf("Atributo escolhido foi: [População]\n");
            printf("População - Carta 01: %d\n", populacao1);
            printf("População - Carta 02: %d\n", populacao2);

            // Comparação das Cartas por atributos- População
            if (populacao1 > populacao2)
            {
                printf("Qual Carta venceu: Carta 01 venceu!\n");
            }
            else if (populacao1 < populacao2)
            {
                printf("Qual Carta venceu: Carta 02 venceu!\n");
            }
            else
            {
                printf("Empate das Cartas!\n");
            }
            break;

        case 2:

            // Resultado da Comparação -  Área em Km²
            printf("\n*******************************************************************************\n");
            printf("*** Resultado das Comparações das Cartas - Opção 2 - Atributo [Área em Km²] ***\n");
            printf("*******************************************************************************\n");
            printf("\nNome do País - Carta 01: %s\n", nome_pais1);
            printf("Nome do País - Carta 02: %s\n", nome_pais2);
            printf("Atributo escolhido foi: [Área em Km²]\n");
            printf("Área em Km² - Carta 01: %.2f\n", area_km1);
            printf("Área em Km² - Carta 02: %.2f\n", area_km2);

            // Comparação das Cartas por atributos -Área em Km²
            if (area_km1 > area_km2)
            {
                printf("Qual Carta venceu: Carta 01 venceu!\n");
            }
            else if (area_km1 < area_km2)
            {
                printf("Qual Carta venceu: Carta 02 venceu!\n");
            }
            else
            {
                printf("Empate das Cartas!\n");
            }

            break;
        case 3:

            // Resultado da Comparação - Atributo PIB
            printf("\n***********************************************************************\n");
            printf("*** Resultado das Comparações das Cartas - Opção 3 - [Atributo PIB] ***\n");
            printf("***********************************************************************\n");
            printf("\nNome do País - Carta 01: %s\n", nome_pais1);
            printf("Nome do País - Carta 02: %s\n", nome_pais2);
            printf("Atributo escolhido foi: [PIB]\n");
            printf("PIB - Carta 01: %.2f\n", pib1);
            printf("PIB - Carta 02: %.2f\n", pib2);

            // Comparação das Cartas por atributos PIB
            if (pib1 > pib2)
            {
                printf("Qual Carta venceu: Carta 01 venceu!\n");
            }
            else if (pib1 < pib2)
            {
                printf("Qual Carta venceu: Carta 02 venceu!\n");
            }
            else
            {
                printf("Empate das Cartas!\n");
            }

            break;
        case 4:

            // Resultado da Comparação - Atributo Número de Pontos Turísticos
            printf("\n***********************************************************************************************\n");
            printf("*** Resultado das Comparações das Cartas - Opção 4 - Atributo [Número de Pontos Turísticos] ***\n");
            printf("***********************************************************************************************\n");
            printf("\nNome do País - Carta 01: %s\n", nome_pais1);
            printf("Nome do País - Carta 02: %s\n", nome_pais2);
            printf("Atributo escolhido foi: [Número de Pontos Turísticos]\n");
            printf("Número de Pontos Turísticos - Carta 01: %d\n", num_ponto_turistico1);
            printf("Número de Pontos Turísticos - Carta 02: %d\n", num_ponto_turistico2);

            // Comparação das Cartas por atributos Numero de Pontos Turisticos
            if (num_ponto_turistico1 > num_ponto_turistico2)
            {
                printf("Qual Carta venceu: Carta 01 venceu!\n");
            }
            else if (num_ponto_turistico1 < num_ponto_turistico2)
            {
                printf("Qual Carta venceu: Carta 02 venceu!\n");
            }
            else
            {
                printf("Empate das Cartas!\n");
            }
            break;

        case 5:

            // Cálculo do Inverso da Densidade Populacional
            inverso_densidade1 = (1.0 / resultado_densidade1);
            inverso_densidade2 = (1.0 / resultado_densidade2);

            // Resultado da Comparação - Atributo Densidade Demográfica
            printf("\n*******************************************************************************************\n");
            printf("*** Resultado das Comparações das Cartas - Opção - 5 - Atributo [Densidade Demográfica] ***\n");
            printf("*******************************************************************************************\n");
            printf("\nNome do País - Carta 01: %s\n", nome_pais1);
            printf("Nome do País - Carta 02: %s\n", nome_pais2);
            printf("Atributo escolhido foi: [Densidade Demográfica]\n");
            printf("Densidade Demográfica - Carta 01: %.6f km² por pessoa\n", inverso_densidade1);
            printf("Densidade Demográfica - Carta 02: %.6f km² por pessoa\n", inverso_densidade2);

            // Comparação das Cartas por atributos Densidade Demográfica
            if (inverso_densidade1 < inverso_densidade2)
            {
                printf("Qual Carta venceu: Carta 01 venceu!\n");
            }
            else if (inverso_densidade1 > inverso_densidade2)
            {
                printf("Qual Carta venceu: Carta 02 venceu!\n");
            }
            else
            {
                printf("Empate entre as Cartas!\n");
            }

            break;
        // Retorna ao menu Principal
        case 6:
        {
            break;
        }

        // Caso Usuário digite opção errada (Número que nao esteja na opção - SUBMENU)
        default:
            printf("\n**********************************************\n");
            printf("****** Opção Inválida - Tente de Novo ********\n");
            printf("**********************************************\n");
            break;
        }
        // Quebra o loop do sub-menu e volta ao menu principal
        if (sub_menu == 6)
        {
            break;
        }

        break;

    // Saída do Jogo - Opção 4 - Menu Principal
    case 3:
    {
        printf("\n**************************************\n");
        printf("***** Saindo do Jogo - Até Logo ******\n");
        printf("**************************************\n\n");
        break;
    }
    // Caso Usuário digite opção errada (Número que nao esteja na opção)(Menu Principal)
    default:
        printf("\n*******************************************\n");
        printf("***** Opção Inválida - Tente de Novo ******\n");
        printf("*******************************************\n");
        break;
    }

    
    return 0;
}
