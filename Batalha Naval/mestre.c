#include <stdio.h>

// Constantes
#define LINHAS 10
#define COLUNAS 10

// Função para validar se a célula está livre (0)
int validarPosicaoNavio(int tabuleiro[LINHAS][COLUNAS], int navio[][2], int tamanhoNavio)
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

// Função para aplicar as habilidades no tabuleiro
void aplicarHabilidade(int tabuleiro[LINHAS][COLUNAS], int habilidade[5][5], int origemX, int origemY)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (habilidade[i][j] == 1)
            {
                int posX = origemX - 2 + i; // Calcula a posição X no tabuleiro
                int posY = origemY - 2 + j; // Calcula a posição Y no tabuleiro
                if (posX >= 0 && posX < LINHAS && posY >= 0 && posY < COLUNAS)
                {
                    if (tabuleiro[posX][posY] == 3) // Verifica se há um navio na célula
                    {
                        tabuleiro[posX][posY] = 1; // Marca o navio como atingido (1)
                    }
                    else
                    {
                        tabuleiro[posX][posY] = 5; // Marca a célula como afetada pela habilidade
                    }
                }
            }
        }
    }
}

// Função para imprimir o tabuleiro com os navios Posicionados
void imprimirTabuleiroPosNavios(int tabuleiro[LINHAS][COLUNAS])
{

    char letra;
    printf("\n************ TABULEIRO ************\n\n");
    printf("     ");
    for (letra = 'A'; letra <= 'J'; letra++)
    {
        printf("  %c", letra);
    }
    printf("\n");

    // Repetição para criar os números de 1 até 10 (linhas)
    for (int i = 0; i < LINHAS; i++)
    {
        printf("  %2d ", i + 1); // Imprime os números 1 a 10 nas linhas

        // Imprime os valores da matriz = Coluna
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("  %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
// Função para imprimir o tabuleiro com as Áreas afetadas pela Habilidade
void imprimirTabuleiroHab(int tabuleiro[LINHAS][COLUNAS])
{
    char letra;
    printf("\n************ TABULEIRO ************\n\n");
    printf("     ");
    for (letra = 'A'; letra <= 'J'; letra++)
    {
        printf("  %c", letra);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++)
    {
        printf("  %2d ", i + 1); // Imprime os números 1 a 10 nas linhas
        for (int j = 0; j < COLUNAS; j++)
        {
            if (tabuleiro[i][j] == 0)
            {
                printf("  0"); // Água
            }
            else if (tabuleiro[i][j] == 1)
            {
                printf("  1"); // Navio atingido (marcado com 1)
            }
            else if (tabuleiro[i][j] == 3)
            {
                printf("  3"); // Navio
            }
            else if (tabuleiro[i][j] == 5)
            {
                printf("  5"); // Área afetada pela habilidade
            }
        }
        printf("\n");
    }
}

int main()
{
    // Variáveis
    char letra;

    // Criando a Matriz 10x10 do tabuleiro
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Matriz - Inicializa todas as células com 0

    // Criando os 2 Navios na Horizontal
    int navioHorizontal_1[3][2] = {{5, 5}, {5, 6}, {5, 7}};
    int navioHorizontal_2[3][2] = {{1, 2}, {1, 3}, {1, 4}};
    int navioDiagonal_1[3][2] = {{2, 1}, {3, 2}, {4, 3}};
    int navioDiagonal_2[3][2] = {{9, 0}, {8, 1}, {7, 2}};

    // Cabeçalho do Jogo
    printf("\n************ JOGO BATALHA NAVAL ***********\n");

    // Validar e Posicionar os navios no tabuleiro
    // Navio Horizontal 01
    if (validarPosicaoNavio(tabuleiro, navioHorizontal_1, 3))
    {
        posicionarNavio(tabuleiro, navioHorizontal_1, 3);
        printf("\n>>> Verificação se o navio Horizontal 01 não sobreponha outro, OK! <<<\n");
        printf("\nNavio Horizontal 01 posicionado com sucesso!\n");

        // Onde o Navio Horizontal 01 está localizado
        printf("\nO Navio Horizontal 01 está posicionado nas cordenadas: ");
        for (int i = 0; i < 3; i++)
        {
            printf("[%c-%d] ", 'A' + navioHorizontal_1[i][1], navioHorizontal_1[i][0] + 1); // Exibe as coordenadas do navio horizontal 01
        }
        printf("\n\n");
    }
    else
    {
        printf("Posição inválida para o Navio Horizontal 01\n");
    }
    // Navio Horizontal 02
    if (validarPosicaoNavio(tabuleiro, navioHorizontal_2, 3))
    {
        posicionarNavio(tabuleiro, navioHorizontal_2, 3);
        printf("\n>>> Verificação se o navio Horizontal 02 não sobreponha outro, OK! <<<\n");
        printf("\nNavio Horizontal 02 posicionado com sucesso!\n");

        // Onde o Navio Horizontal 02 está localizado
        printf("\nO Navio Horizontal 02 está posicionado nas coordenadas: ");
        for (int i = 0; i < 3; i++)
        {
            printf("[%c-%d] ", 'A' + navioHorizontal_2[i][1], navioHorizontal_2[i][0] + 1); // Exibe as coordenadas do navio horizontal 02
        }
        printf("\n\n");
    }
    else
    {
        printf("Posição inválida para o Navio Horizontal 02\n");
    }
    // Navio Diagonal 01
    if (validarPosicaoNavio(tabuleiro, navioDiagonal_1, 3))
    {
        posicionarNavio(tabuleiro, navioDiagonal_1, 3);
        printf("\n>>> Verificação se o navio Diagonal 01 não sobreponha outro, OK! <<<\n");
        printf("\nNavio Diagonal 01 posicionado com sucesso!\n");

        // Onde o Navio Diagonal 01 está localizado
        printf("\nO Navio Diagonal 01 está posicionado nas coordenadas: ");
        for (int i = 0; i < 3; i++)
        {
            printf("[%c-%d] ", 'A' + navioDiagonal_1[i][1], navioDiagonal_1[i][0] + 1); // Exibe as coordenadas do navio diagonal 01
        }
        printf("\n\n");
    }
    else
    {
        printf("Posição inválida para o Navio Diagonal 01\n");
    }
     // Navio Diagonal 02
    if (validarPosicaoNavio(tabuleiro, navioDiagonal_2, 3))
    {
        posicionarNavio(tabuleiro, navioDiagonal_2, 3);
        printf("\n>>> Verificação se o navio Diagonal 02 não sobreponha outro, OK! <<<\n");
        printf("\nNavio Diagonal 02 posicionado com sucesso!\n");

        // O Navio Diagonal 01 está localizado
        printf("\nO Navio Diagonal 02 está posicionado nas coordenadas: ");
        for (int i = 0; i < 3; i++)
        {
            printf("[%c-%d] ", 'A' + navioDiagonal_2[i][1], navioDiagonal_2[i][0] + 1); // Exibe as coordenadas do navio diagonal 02
        }
        printf("\n\n");
    }
    else
    {
        printf("Posição inválida para o Navio Diagonal 02\n");
    }

    // Mostra os navios posicionados antes de serem afetados pela habilidade
    // Exibir o tabuleiro com as habilidades aplicadas
    printf("\n******* Tabuleiro com os Navios Posicionados *******\n");
    imprimirTabuleiroPosNavios(tabuleiro);

    // Matrizes de habilidade
    //Cone
    int cone[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}};
    //Cruz
    int cruz[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    //Octaedro
    int octaedro[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0}};

    // Definir pontos de origem para as habilidades
    int origemConeX = 1, origemConeY = 5;
    int origemCruzX = 5, origemCruzY = 5;
    int origemOctaedroX = 7, origemOctaedroY = 2;

    // Aplicar as habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, origemConeX, origemConeY);
    aplicarHabilidade(tabuleiro, cruz, origemCruzX, origemCruzY);
    aplicarHabilidade(tabuleiro, octaedro, origemOctaedroX, origemOctaedroY);

    // Exibir o tabuleiro com as habilidades aplicadas
    printf("\n******* Tabuleiro com os Navios e Habilidades Aplicadas *******\n");
    imprimirTabuleiroHab(tabuleiro);

    printf("\n\n");

    return 0;
}
