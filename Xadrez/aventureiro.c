#include <stdio.h>

int main()
{

    //Intermediário - Xadrez
    //Váriaveis
    int movimento1 = 1, movimento2 = 1;
    int opcao;
    
    do
    {
        //Menu de escolha
        printf("\nVocê Gostaria de movimentar o cavalo para qual lado?\n\n");
        printf("1. Para Cima e Direita\n");
        printf("2. Para Baixo e Esquerda\n");
        printf("3. Deseja movimentar a Torre\n");
        printf("4. Deseja movimentar o Bispo\n");
        printf("5. Deseja movimentar a Rainha\n");
        printf("6. Sair\n");
        printf("\nEscolha uma opção...: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            // Movimentação do cavalo: Cima e Direita 

            while (movimento1--) // Externo = linhas
            {
                printf("\n*** Resultado movimento [Cavalo] ***\n\n");
                printf("[>] Direita\n"); // Imprime  uma vez Direita

                for (int i = 0; i < 2; i++) // 2 movimentos para a direita interno =Colunas
                {
                    printf("[^] Cima \n"); // Imprime duas Vezes Cima
                }
            }

            break;

        case 2:
            // Movimentação do cavalo: Baixo e Esquerda

            while (movimento2--)
            {
                printf("\n*** Resultado movimento [Cavalo] ***\n\n");
                for (int j = 0; j < 2; j++) // 2 movimentos para a esquerda
                {

                    printf("[V] Baixo\n");
                }

                printf("[<] Esquerda\n");
            }

            break;
        case 3:

            // Movimenta a Peça do Xadrez [Torre] =  5 Casas à Direita
            // 5 movimentos para Direita
            printf("\n*** Resultado movimento [Torre] ***\n\n");
            for (int i = 1; i <= 5; i++)
            {

                printf("Direita ");
            }
            printf("\n");
            break;

        case 4:

            int x = 0;
            // Movimenta a Peça do Xadrez [Bispo] =  Diagonal
            printf("\n*** Resultado movimento [Bispo - Diagonal] ***\n\n");
            while (x < 5)
            {
                printf("Cima[^] Direita[>] ", x);
                x++;
            }
            printf("\n");
            break;

        case 5:

            int i = 0;

            // Movimenta a Peça do Xadrez [Rainha] =  8 Casas à esquerda
            //  Rainha = Do-While
            printf("\n*** Resultado movimento [Rainha] ***\n\n");
            do
            {
                printf("[<]Esquerda ");
                i++;

            } while (i < 8);
            printf("\n");
            break;

        case 6:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 6);

    return 0;
}
