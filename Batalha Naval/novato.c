#include <stdio.h>

// Função para validar se a célula está livre (0)
int validarPosicaoNavio(int tabuleiro[10][10], int navio[][2], int tamanhoNavio)
{
    for (int i = 0; i < tamanhoNavio; i++)
    {
        int linha = navio[i][0];
        int coluna = navio[i][1];

        // Verifica se a célula está ocupada
        if (tabuleiro[linha][coluna] != 0)
        {
            return 0; // Retorna 0 se houver sobreposição (célula não está livre)
        }
    }
    return 1; // Retorna 1 se a posição estiver livre
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[10][10], int navio[][2], int tamanhoNavio)
{
    for (int i = 0; i < tamanhoNavio; i++)
    {
        int linha = navio[i][0];
        int coluna = navio[i][1];
        tabuleiro[linha][coluna] = 3; // Marca a célula como 3 (navio)
    }
}

int main()
{
    // Variáveis
    char letra;

    // Criando a Matriz 10x10 do tabuleiro
    int tabuleiro[10][10] = {0}; // Matriz - Inicializa todas as células com 0

    // Navio horizontal (começa em F6 ~ H6 - ocupa 3 posições [colunas])
    int navioHorizontal[3][2] = {{5, 5}, {5, 6}, {5, 7}};

    // Navio vertical (começa em C8 ~ C10 - ocupa 3 posições [linhas] )
    int navioVertical[3][2] = {{7, 2}, {8, 2}, {9, 2}};

    // Cabeçalho do Jogo
    printf("************ JOGO BATALHA NAVAL ***********\n");

    // Validar e Posicionar o Navio Horizontal
    if (validarPosicaoNavio(tabuleiro, navioHorizontal, 3))
    {
        posicionarNavio(tabuleiro, navioHorizontal, 3);
        printf("\nNavio Horizontal posicionado com sucesso!\n");
    }
    else
    {
        printf("\nPosição inválida para o Navio Horizontal (sobreposição detectada)!\n");
    }

    // Validar e Posicionar o Navio Vertical
    if (validarPosicaoNavio(tabuleiro, navioVertical, 3))
    {
        posicionarNavio(tabuleiro, navioVertical, 3);
        printf("\nNavio Vertical posicionado com sucesso!\n");
    }
    else
    {
        printf("\nPosição inválida para o Navio Vertical (sobreposição detectada)!zn\n");
    }

    printf("\n ******* Tabuleiro com os navios *******\n\n");

    // Imprime as letras A até J nas colunas
    printf("     "); // Espaço inicial para alinhamento
    for (letra = 'A'; letra <= 'J'; letra++)
    {
        printf("  %c", letra); // Imprime as letras A até J nas colunas
    }
    printf("\n\n");

    // Repetição para criar os números de 1 até 10 (linhas)
    for (int i = 0; i < 10; i++)
    {
        printf("  %2d ", i + 1); // Imprime os números 1 a 10 nas linhas

        // Imprime os valores da matriz = Coluna
        for (int j = 0; j < 10; j++)
        {
            printf("  %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

     // O Navio Horizontal está localizado
     printf("\nO Navio Horizontal está posicionado nas colunas: ");
     for (int i = 0; i < 3; i++) {
         printf("[%c-%d] ", 'A' + navioHorizontal[i][1],  navioHorizontal[i][0] + 1); // Exibe as coordenadas do navio horizontal
     }
     printf("\n");

     // O Navio Vertical está localizado
     printf("\nO Navio Vertical está posicionado na coluna: ");
     for (int i = 0; i < 3; i++) {
         printf("[%c-%d] ", 'A'  + navioVertical[i][1], navioVertical[i][0] + 1); // Exibe as coordenadas do navio Vertical
     }
     printf("\n\n");

    return 0;
}
