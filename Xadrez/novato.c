#include <stdio.h>

int main()
{
    /*********************************************/
    // Código da Torre
    // Torre = For
    printf("*** Movimento da Torre ***\n\n");
    for (int i = 1; i <= 5; i++)// 5 movimentos para Direita
    {
        printf("Direita[>] ");
    }
    printf("\n\n");

    /*******************************************/

    //Código do Bispo
    // Bispo = While  - Diagonal
    int x = 0; // Váriavel
    printf("*** Movimento do Bispo ***\n\n");
    while (x < 5)
    {
        printf("Cima[^] Direita[>]", x); //Simula como Diagonal
        x++;
        printf("\n");
    }
        printf("\n");
    
    /**************************************** */

    // Rainha = Do-While
    int i = 0; //Váriavel
    printf("*** Movimento da Rainha ***\n\n");
    do
    {
        printf("[<]Esquerda ");
        i++;

    } while (i < 8); // 8 Casas a Esquerda
   
    return 0;
}