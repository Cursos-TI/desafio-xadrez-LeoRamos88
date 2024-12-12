#include <stdio.h>

void Bispo(bispo)
{
    /*
        Usei  a funçã o recursiva para mostrar o movimento do bispo ,onde a função  age como o loop ,
        -sendo encerrado quando chega a um total de 5
    */
    if (bispo <=5)
    {
        printf("Casa diagonal direita para cima : %d\n",bispo);

        Bispo(bispo +1);

    }
    printf("-------");

}
void Torre(torre)
{
   //Usei a função  recursiva para descrever  o movimento da torre ,onde ela anda 5 casas para direita
    if(torre <= 5)
    {
        printf(" Casa : %d para direita\n ",torre);

        Torre(torre + 1);

    }
    printf("--------");

}
void Rainha()
{
 /*
    Como  a rainha movimentou 8 casas ,eu descrevi por meio do marcador 1 o movimento das peças ,
    E com o marcador 2  eu disse a casa que a peça se encontrava.



 */
    int marcador1 = 1;
    int marcador2 = 1;

    while(marcador1 <=8)
    {
        while(marcador2 <=8)
        {
            printf("Movimento : %d Casa: %d Para esquerda \n",marcador1,marcador2);
            marcador2++;
            break;

        }
        marcador1++;
    }
    printf("-----------------------------------------");

}
void Cavalo()
{
    /*
        No movimento do cavalo foi usado um loop for aninhado :
            Cada movimento do cavalo é contado como cima , e quando ele chega no movimento 2 ele da um salto para direita;

    */
    int cima;
    int direita;

    for(int i =1;i <=2;i++)
    {
            if(i ==1)
            {
                printf("Cima : %d\n",i);
            }

            else if(i == 2)
            {
                for(int x =1;x <=2;x++)
                {
                    printf("Cima: %d Direita : %d\n",i,x);
                    break;
                }
            }


    }

}


int main()
{
    int bispo = 1;
    int torre = 1;
    int opcao;


    printf("############ MOVIMENTAÇÃO DAS PESSAS DE XADREZ ##########\n\n");

    printf("Deseja movimentar qual peça :\n");
    printf("1-Bispo\n");
    printf("2-Torre\n");
    printf("3-Rainha\n");
    printf("4-Cavalo\n");
    printf("5-Todas\n");

    printf("Digite um opção :");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
             printf("Movimento Bispo: \n");
             Bispo(bispo);
             break;
        case 2:
            printf("\nMovimento Torre: \n");
            Torre(torre);
            break;
        case 3:
            printf("\nMovimento rainha : \n");
            Rainha();
            break;
        case 4:
            printf("\nMovimento Cavalo: \n");
            Cavalo();
            break;
        case 5:
            printf("Movimento Bispo: \n");

            Bispo(bispo);

            printf("\nMovimento Torre: \n");

            Torre(torre);

            printf("\nMovimento rainha : \n");
            Rainha();

            printf("\nMovimento Cavalo: \n");
            Cavalo();
            break;
        default:
            printf("###########   Digite uma  opção válida    ##############\n");
            main();
            break;
    }

    return 0;
}

