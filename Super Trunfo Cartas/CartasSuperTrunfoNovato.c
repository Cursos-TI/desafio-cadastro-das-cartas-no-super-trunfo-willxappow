#include <stdio.h>

int main(){

    //Desafio Novato    
    //Declaração de Variáveis 
    //Variáveis de Carta1 e Carta2

      char estado1;
      char estado2;
      char cod_carta1[3];
      char cod_carta2[3];
      char nome_cidade1[50];
      char nome_cidade2[50];
      int populacao1;
      int populacao2;
      float area_km1;
      float area_km2;
      float pib1;
      float pib2;
      int num_ponto_turistico1;
      int num_ponto_turistico2;
    
    //Cadastro das Cartas - Entrada de Dados via scanf
    //Cadastro da Carta 1
    printf("***** Cadastro da Carta 1*****\n\n");
    printf("Digite o estado: ");
    scanf("%c", &estado1);
    printf("Digite o código: ");
    scanf("%s", &cod_carta1);
    getchar(); //lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets (nome_cidade1, 50, stdin); //Entrada de dados via fgets devido ao espaço do teclado
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em Km²: ");
    scanf("%f", &area_km1);
    printf("Digite o Pib: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico1);

     //Aviso de Carta Cadastrada com Sucesso
     printf("\nCarta cadastrada com sucesso!\n");
     
     //Limpeza do Buffe r- tecla 
     getchar();

    //Cadastro da Carta 2 - Entrada de Dados via scanf
    printf("\n***** Cadastro da Carta 2*****\n\n");
    printf("Digite o estado: ");
    scanf("%c", &estado2);
    printf("Digite o código: ");
    scanf("%s", &cod_carta2);
    getchar(); //lê a partir do local especificado pelo qual geralmente é a entrada do teclado
    printf("Digite o nome da cidade: ");
    fgets (nome_cidade2, 50, stdin); //Entrada de dados via fgets devido ao espaço do teclado
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em Km²: ");
    scanf("%f", &area_km2);
    printf("Digite o Pib: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_ponto_turistico2);

     //Aviso de Carta Cadastrada com Sucesso
     printf("\nCarta cadastrada com sucesso!\n");

    // Saída de Dados via printf - Resultado
    //Dados da Carta 1 
    printf("\n  Resultado das Cartas\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\0", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em Km²: %.2f km²\n", area_km1);
    printf("PIB: %.2f bilhôes de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico1);
    
    //Dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\0", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhôes de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_ponto_turistico2);
       
    return 0;
}
