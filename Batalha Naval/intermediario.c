#include <stdio.h>

// Constantes
#define LINHAS 10
#define COLUNAS 10

// Função para validar se a célula está livre (0)
int validarPosicaoNavio(int tabuleiro[LINHAS][COLUNAS], int navio[0][2], int tamanhoNavio)
{
    for (int i = 0; i < tamanhoNavio; i++)
    {
        int LINHA = navio[i][0];
        int COLUNA = navio[i][1];
        
        // Verifica se a célula está ocupada
        if (tabuleiro[LINHA][COLUNA] != 0)
        {
            return 0; // Retorna 0 se houver sobreposição (célula não está livre)
        }
    }
    return 1; // Retorna 1 se a posição estiver livre
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[LINHAS][COLUNAS], int navio[][2], int tamanhoNavio)
{
    for (int i = 0; i < tamanhoNavio; i++)
    {
        int LINHA = navio[i][0];
        int COLUNA = navio[i][1];
        tabuleiro[LINHA][COLUNA] = 3; // Marca a célula como 3
    }
}

int main()
{
    // Variáveis
    char letra;
    
    // Criando a Matriz 10x10 do tabuleiro
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Matriz - Inicializa todas as células com 0

    // Criando os 2 Navios na Horizontal
    // Navio horizontal 01 (começa em F6 ~ H6 - ocupa 3 posições [colunas])
    int navioHorizontal_1[3][2] = {{5, 5}, {5, 6}, {5, 7}};

    // Navio horizontal 02 (começa em C2 ~ E2 - ocupa 3 posições [colunas])
    int navioHorizontal_2[3][2] = {{1, 2}, {1, 3}, {1, 4}};

    // Navio diagonal 01 (começa em B3, C4, D5 )
    int navioDiagonal_1[3][2] = {{2, 1}, {3, 2}, {4, 3}};

    // Navio diagonal 02 (começa em A10, B9, C8 )
    int navioDiagonal_2[3][2] = {{9, 0}, {8, 1}, {7, 2}};

   
    // Cabeçalho do Jogo
    printf("\n************ JOGO BATALHA NAVAL ***********\n");

     // Validar e Posicionar os navios no tabuleiro
     if (validarPosicaoNavio(tabuleiro, navioHorizontal_1, 3)) {
        posicionarNavio(tabuleiro, navioHorizontal_1, 3);
        printf("\nNavio Horizontal 01 posicionado com sucesso!\n");
    } else {
        printf("Posição inválida para o Navio Horizontal 01\n");
    }

    if (validarPosicaoNavio(tabuleiro, navioHorizontal_2, 3)) {
        posicionarNavio(tabuleiro, navioHorizontal_2, 3);
        printf("\nNavio Horizontal 02 posicionado com sucesso!\n");
    } else {
        printf("Posição inválida para o Navio Horizontal 02\n");
    }

    if (validarPosicaoNavio(tabuleiro, navioDiagonal_1, 3)) {
        posicionarNavio(tabuleiro, navioDiagonal_1, 3);
        printf("\nNavio Diagonal 01 posicionado com sucesso!\n");
    } else {
        printf("Posição inválida para o Navio Diagonal 01\n");
    }

    if (validarPosicaoNavio(tabuleiro, navioDiagonal_2, 3)) {
        posicionarNavio(tabuleiro, navioDiagonal_2, 3);
        printf("\nNavio Diagonal 02 posicionado com sucesso!\n");
    } else {
        printf("Posição inválida para o Navio Diagonal 02\n");
    }

    printf("\n ******* Tabuleiro com os navios *******\n\n");

    printf("     "); // Espaço inicial para alinhamento

    // Imprime as letras A até J nas colunas
    for (letra = 'A'; letra <= 'J'; letra++) {
        printf("  %c", letra);
    }
    printf("\n\n"); // Espaçamento para os números

    // Repetição para criar os números de 1 até 10 (linhas)
    for (int i = 0; i < LINHAS; i++) {
        printf("  %2d ", i + 1); // Imprime os números 1 a 10 nas linhas

        // Imprime os valores da matriz = Coluna
        for (int j = 0; j < COLUNAS; j++) {
            printf("  %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

     // O Navio Horizontal 01 está localizado
     printf("\nO Navio Horizontal 01 está posicionado nas cordenadas: ");
     for (int i = 0; i < 3; i++)
     {
         printf("[%c-%d] ", 'A' + navioHorizontal_1[i][1], navioHorizontal_1[i][0] + 1); // Exibe as coordenadas do navio horizontal 01
     }
     printf("\n\n");
 
     // O Navio Horizontal 02 está localizado
     printf("O Navio Horizontal 02 está posicionado nas coordenadas: ");
     for (int i = 0; i < 3; i++)
     {
         printf("[%c-%d] ", 'A' + navioHorizontal_2[i][1], navioHorizontal_2[i][0]+ 1); // Exibe as coordenadas do navio horizontal 02
     }
     printf("\n\n");
 
     // O Navio Diagonal 01 está localizado
     printf("O Navio Diagonal 01 está posicionado nas coordenadas: ");
     for (int i = 0; i < 3; i++)
     {
         printf("[%c-%d] ", 'A' + navioDiagonal_1[i][1], navioDiagonal_1[i][0] + 1); // Exibe as coordenadas do navio diagonal 01
     }
     printf("\n\n");
 
     // O Navio Diagonal 01 está localizado
     printf("O Navio Diagonal 02 está posicionado nas coordenadas: ");
     for (int i = 0; i < 3; i++)
     {
         printf("[%c-%d] ", 'A' + navioDiagonal_2[i][1], navioDiagonal_2[i][0] + 1); // Exibe as coordenadas do navio diagonal 02
     }
     printf("\n\n");

    return 0;
}
