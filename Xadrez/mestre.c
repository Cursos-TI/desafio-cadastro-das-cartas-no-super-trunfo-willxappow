#include <stdio.h>

// Função Recursiva - Torre
void movimentoTorre(int qtd_casas)
{
    if (qtd_casas > 0)
    {
        printf("Direita[->] ");
        movimentoTorre(qtd_casas - 1);
    }
}
// Função Recursiva - Bispo
void movRecursivoBispo(int qtd_casas)
{
    printf("\n");
    if (qtd_casas > 0)
    {
        printf("Cima[^] - Direita[>]");
        movRecursivoBispo(qtd_casas - 1);
    }
}
// Função Loops Aninhados - Bispo
void movimentoBispo(int qtd_passos)
{
    for (int i = 0; i < qtd_passos; i++) // i = vertical
    {
        printf("\n");
        printf("[Cima [^] ");
        for (int j = 0; j < 1; j++) // j = horizontal
        {
            printf("[Direita [>] ");
        }
    }
    printf("\n");
}

// Função Recursiva - Rainha
void movimentoRainha(int qtd_casas)
{
    if (qtd_casas > 0)
    {
        printf("[<]Esquerda ");
        movimentoRainha(qtd_casas - 1);
    }
}
// Função Recursiva - Cavalo
void movimentoCavalo(int qtd_casas)
{

    for (int i = 0, j = 0; i < 2 || j < 1;)
    { // Loop externo controla o movimento para cima e a direita
        if (j < 1)
        { // Movimenta para a direita 1 vez
            printf("[>] Direita\n");
            j++; // Incrementa para contar o movimento horizontal
        }

        if (i < 2)
        { // Movimenta para cima 2 vezes
            printf("[^] Cima\n");
            i++; // Incrementa para contar o movimento vertical
        }
    }
}

int main()
{
    //Váriaveis
    int opcao, torre = 5, bispo = 5, rainha = 8, cavalo = 1;
    do
    {
        printf("\n******************************************\n"); // Cabeçalho do Jogo
        printf("************* Jogo de Xadrez *************\n");
        printf("******************************************\n");
        printf("\n***** O que você deseja fazer? *****\n\n");
        printf("1. Movimentar a [Torre]\n");                     // Setado no código para movimentar 5 vezes a Direita;
        printf("2. Movimentar o [Bispo] - [Modo Recursivo]\n");  // Setado no código para movimentar 5 vezes a Direita;
        printf("3. Movimentar o [Bispo] - [Loops Aninhados]\n"); // Setado no código para movimentar 5 vezes a Direita;
        printf("4. Movimentar a [Rainha]\n");                    // Setado no código para movimentar 5 vezes a Direita;
        printf("5. Movimentar o [Cavalo]\n");                    // Setado no código para movimentar 5 vezes a Direita;
        printf("6. Sair do Jogo de Xadrez\n\n");                   // Sair do Jogo
        printf("Escolha uma opção...:");
        scanf("%d", &opcao); //Escolher uma Opção do Menu
        printf("\n");

        switch (opcao)
        {

        case 1:
        {
            // Torre
            // 5 movimentos para [Direita]
            printf("A [Torre] se movimentou 5 vezes para a [Direita]\n\n");
            movimentoTorre(torre);
            printf("\n");
            break;
        }

        case 2:
        {
            // Bispo - Recursivo
            // 5 movimentos para [Direita e Cima] = Simulando Diagonal
            printf("***** Demonstração do modo Recursivo *****\n\n");
            printf("O [Bispo] se movimentou 5 vezes para a [Direita] e 5 para [Cima] = Diagonal\n");
            movRecursivoBispo(bispo);

            break;
        }
        case 3:
        {
            // Bispo - Loops Aninhados
            // 5 movimentos para [Direita e Cima] = Simulando Diagonal
            printf("***** Demonstração do modo Loops Aninhados *****\n\n");
            printf("O [Bispo] se movimentou 5 vezes para a [Direita] e 5 vezes para [Cima] = Diagonal\n");
            movimentoBispo(bispo);
            break;
        }

        case 4:
        {
            // Rainha
            // 8 movimentos para a [Esquerda]
            printf("A [Rainha] se movimentou 8 vezes para a [Esquerda]\n\n");
            movimentoRainha(rainha);
            printf("\n");
            break;
        }

        case 5:
        {
            // Cavalo
            // 1 movimento em L
            printf("*** O [Cavalo] fez um Movimento em [L] ***\n\n");
            movimentoCavalo(cavalo);
            break;
        }

        case 6:
        {
            //Sair do Jogo
            break;
            printf("Saindo...\n");
            return 0;
        }

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 6);
    return 0;
}
