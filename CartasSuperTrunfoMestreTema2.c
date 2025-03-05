#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // Desafio Mestre  - Tema 1
    // Declaração de Variáveis
    // Variáveis de Carta 01 e Carta 02
    char nome_pais1[50], nome_pais2[50];
    char estado1[3], estado2[3];
    char cod_carta1[5], cod_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km1, area_km2;
    float pib1, pib2;
    int num_ponto_turistico1, num_ponto_turistico2;
    float resultado_percapita1, resultado_percapita2;
    int menu_principal, escolha_atributo1, escolha_atributo2;
    double inverso_densidade1, inverso_densidade2, resultado_densidade1, resultado_densidade2, soma1, soma2;

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
        scanf("%lu", &populacao1); // Digite a população - ex: 1234567890
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
        scanf("%lu", &populacao2); // Digite a população - ex: 1234567890
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
        printf("População: %lu\n", populacao1);
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
        printf("População: %lu\n", populacao2);
        printf("Área em Km²: %.2f km²\n", area_km2);
        printf("PIB: %.2f bilhões de reais \n", pib2);
        printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", resultado_densidade2);
        printf("PIB Per Capita: %.2f reais\n\n", resultado_percapita2);

    case 2:
       
            // SubMenu Escolha dos atributos para Comparação
            // Escolha do Primeiro Atributo
            printf("\n**********************************************************************************\n");
            printf("******* Escolha o [Primeiro] atributo da Carta 01 que você deseja Comparar *******\n");
            printf("**********************************************************************************\n\n");
            printf("1. População\n");
            printf("2. Área em Km²\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("6. Voltar ao Menu Principal \n");
            printf("\nEscolha uma opção..: ");
            scanf("%d", &escolha_atributo1);
            getchar();
            // Escolha do Primeiro Atributo
            printf("\n*******************************************************************************************\n");
            printf("******* OK! Agora Escolha o [Segundo] atributo da Carta 01 que você deseja Comparar *******\n");
            printf("*******************************************************************************************\n\n");
            printf("1. População\n");
            printf("2. Área em Km²\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade Demográfica\n");
            printf("6. Voltar ao Menu Principal \n");
            printf("\nEscolha uma opção..: ");
            scanf("%d", &escolha_atributo2);
            getchar();

            // Verifica se não está escolhendo o mesmo atributo
            if (escolha_atributo1 == escolha_atributo2)
            {
                printf("\n*************************************************************\n");
                printf("*** Você não pode escolher o mesmo atributo, tente outro: ***\n");
                printf("*************************************************************\n\n");
                printf("Escolha o Segundo atributo novamente : ");
                scanf("%d", &escolha_atributo2);
                getchar();
                if (escolha_atributo2 == escolha_atributo1)
                {
                    printf("\n************************************************************\n");
                    printf("*** Você não pode escolher o mesmo atributo, tente outro ***\n");
                    printf("************************************************************\n\n");
                    printf("Escolha o Segundo atributo novamente: ");
                    scanf("%d", &escolha_atributo2);
                    getchar();

                    printf("\n*** Atributos escolhidos corretamente ***\n");
                }
            }

            else
            {
                printf("\n*** Atributos escolhidos corretamente ***\n");
            }

            // SubMenu para escolha de Atributo para comparação
            switch (escolha_atributo1)
            {
            case 1:

                // Resultado da Comparação -  População
                printf("\n*********************************************\n");
                printf("*** Resultado das Comparações das Cartas  ***\n");
                printf("*********************************************\n");
                printf("\nNome do País - Carta 01: %s\n", nome_pais1);
                printf("Nome do País - Carta 02: %s\n", nome_pais2);
                printf("Atributo 01: [População]\n");
                printf("Valor do atributo 01 - Carta 01: %lu\n", populacao1);
                printf("Valor do atributo 02 - Carta 02: %lu\n", populacao2);

                soma1 = (double)(populacao1 + populacao2);

                break;

            case 2:
                // Resultado da Comparação -  Área em Km²
                printf("\n*********************************************\n");
                printf("*** Resultado das Comparações das Cartas  ***\n");
                printf("*********************************************\n");
                printf("\nNome do País - Carta 01: %s\n", nome_pais1);
                printf("Nome do País - Carta 02: %s\n", nome_pais2);
                printf("Atributo 01: [Área em Km²]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.2f\n", area_km1);
                printf("Valor do [Atributo 02] - Carta 02: %.2f\n", area_km2);

                soma1 = (double)(area_km1 + area_km2);

                break;
            case 3:
                // Resultado da Comparação - Atributo PIB
                printf("\n*********************************************\n");
                printf("*** Resultado das Comparações das Cartas  ***\n");
                printf("*********************************************\n");
                printf("\nNome do País - Carta 01: %s\n", nome_pais1);
                printf("Nome do País - Carta 02: %s\n", nome_pais2);
                printf("Atributo 1: [PIB]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.2f\n", pib1);
                printf("Valor do [Atributo 02] - Carta 02: %.2f\n", pib2);

                soma1 = (double)(pib1 + pib2);

                break;
            case 4:

                // Resultado da Comparação - Atributo Número de Pontos Turísticos
                printf("\n*********************************************\n");
                printf("*** Resultado das Comparações das Cartas  ***\n");
                printf("*********************************************\n");
                printf("\nNome do País - Carta 01: %s\n", nome_pais1);
                printf("Nome do País - Carta 02: %s\n", nome_pais2);
                printf("Atributo 1: [Número de Pontos Turísticos]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.2f\n", num_ponto_turistico1);
                printf("Valor do [Atributo 02] - Carta 02: %.2f\n", num_ponto_turistico2);

                soma1 = (double) (num_ponto_turistico1 + num_ponto_turistico2);

                break;

            case 5:
                // Cálculo do Inverso da Densidade Populacional
                inverso_densidade1 = (1.0 / resultado_densidade1);
                inverso_densidade2 = (1.0 / resultado_densidade2);

                // Resultado da Comparação - Atributo Densidade Demográfica
                printf("\n*********************************************\n");
                printf("*** Resultado das Comparações das Cartas  ***\n");
                printf("*********************************************\n");
                printf("\nNome do País - Carta 01: %s\n", nome_pais1);
                printf("Nome do País - Carta 02: %s\n", nome_pais2);
                printf("Atributo 1: [Densidade Demográfica]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.6f\n", inverso_densidade1);
                printf("Valor do [atributo 02] - Carta 02: %.6f\n", inverso_densidade2);

                soma1 = inverso_densidade1 + inverso_densidade2;

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
            if (escolha_atributo1 == 6)
            {
                break;
            }
            // Atributo 2 Carta 01
            // SubMenu para escolha de Atributo para comparação
            switch (escolha_atributo2)
            {
            case 1:
                // Soma dos Atributos
                soma2 = (double)(populacao1 + populacao2);
                // Resultado da Comparação -  População
                printf("Atributo 02: [População]\n");
                printf("Valor do [Atributo 1] - Carta 01: %lu\n", populacao1);
                printf("Valor do [atributo 2] - Carta 02: %lu\n", populacao2);
                printf("Soma dos [Atributos 01]: %.6f\n", soma1);
                printf("Soma dos [Atributos 02]: %.6f\n", soma2);

                if (populacao1 > populacao2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 1]\n");
                }
                else if (populacao1 < populacao2)
                {
                    printf("Venceu Carta 02 - Valor do [Atributo 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                if (soma1 > soma2)
                {
                    printf("Venceu Carta 01 - Soma dos [Atributos 1]\n");
                }
                else if (soma1 < soma2)
                {
                    printf("Venceu Carta 02 - Soma dos [Atributos 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                printf("\nAperte qualquer botão para retornar!\n");
                getchar();
                break;

            case 2:
                // Soma dos Atributos
                soma2 = (double)(area_km1 + area_km2);
                // Resultado da Comparação -  Área em Km²
                printf("Atributo 02: [Área em Km²]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.2f\n", area_km1);
                printf("Valor do [Atributo 02] - Carta 02: %.2f\n", area_km2);
                printf("Soma dos [Atributos 01] : %.6f\n", soma1);
                printf("Soma dos [Atributos 02] : %.6f\n", soma2);

                if (area_km1 > area_km2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 1]\n");
                }
                else if (area_km1 < area_km2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                if (soma1 > soma2)
                {
                    printf("Venceu Carta 01 - Soma dos [Atributos 1]\n");
                }
                else if (soma1 < soma2)
                {
                    printf("Venceu Carta 02 - Soma dos [Atributos 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                printf("\nAperte qualquer botão para retornar!\n");
                getchar();
                break;
            case 3:
                // Soma dos Atributos
                soma2 = (double)(pib1 + pib2);
                // Resultado da Comparação - Atributo PIB
                printf("Atributo 02: [PIB]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.2f\n", pib1);
                printf("Valor do [Atributo 02] - Carta 02: %.2f\n", pib2);
                printf("Soma dos [Atributos 01]: %.6f\n", soma1);
                printf("Soma dos [Atributos 02]: %.6f\n", soma2);

                if (pib1 > pib2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 1]\n");
                }
                else if (pib1 < pib2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                if (soma1 > soma2)
                {
                    printf("Venceu Carta 01 - Soma dos [Atributos 1]\n");
                }

                else if (soma1 < soma2)
                {
                    printf("Venceu Carta 02 - Soma dos [Atributos 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                printf("\nAperte qualquer botão para retornar!\n");
                getchar();
                break;
            case 4:
                // Soma dos Atributos
                soma2 = (double)(num_ponto_turistico1 + num_ponto_turistico2);
                // Resultado da Comparação - Atributo Número de Pontos Turísticos
                printf("Atributo 02: [Número de Pontos Turísticos]\n");
                printf("Valor do [Atributo 01] - Carta 01: %d\n", num_ponto_turistico1);
                printf("Valor do [Atributo 02] - Carta 02: %d\n", num_ponto_turistico2);
                printf("Soma dos [Atributos 01]: %.6f\n", soma1);
                printf("Soma dos [Atributos 02]: %.6f\n", soma2);

                if (num_ponto_turistico1 > num_ponto_turistico2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 1]\n");
                }
                else if (num_ponto_turistico1 < num_ponto_turistico2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                if (soma1 > soma2)
                {
                    printf("Venceu Carta 01 - Soma dos [Atributos 1]\n");
                }

                else if (soma1 < soma2)
                {
                    printf("Venceu Carta 02 - Soma dos [Atributos 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                printf("\nAperte qualquer botão para retornar!\n");
                getchar();
                break;

            case 5:

                // Cálculo do Inverso da Densidade Populacional
                inverso_densidade1 = (1.0 / resultado_densidade1);
                inverso_densidade2 = (1.0 / resultado_densidade2);
                // Soma dos Atributos
                soma2 = inverso_densidade1 + inverso_densidade2;

                // Resultado da Comparação - Atributo Densidade Demográfica

                printf("Atributo 02: [Densidade Demográfica]\n");
                printf("Valor do [Atributo 01] - Carta 01: %.6f km² por pessoa\n", inverso_densidade1);
                printf("Valor do [Atributo 02] - Carta 02: %.6f km² por pessoa\n", inverso_densidade2);
                printf("Soma dos [Atributos 01]: %.6f\n", soma1);
                printf("Soma dos [Atributos 02]: %.6f\n", soma2);

                if (inverso_densidade1 < inverso_densidade2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 1]\n");
                }
                else if (inverso_densidade1 > inverso_densidade2)
                {
                    printf("Venceu Carta 01 - Valor do [Atributo 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }

                if (soma1 > soma2)
                {
                    printf("Venceu Carta 01 - Soma dos [Atributos 1]\n");
                }

                else if (soma1 < soma2)
                {
                    printf("Venceu Carta 02 - Soma dos [Atributos 2]\n");
                }
                else
                {
                    printf("Deu Empate\n");
                }
                printf("\nAperte qualquer botão para retornar!\n");
                getchar();
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
        if (escolha_atributo1 == 6)
        {
            break;
        }

        break;
        // Continua no menu até escolher a opção 3 para sair

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

    system("pause");
    return 0;
}
