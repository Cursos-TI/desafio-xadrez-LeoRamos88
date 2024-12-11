#include <stdio.h>

int main()
{
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;



    //Movimentação do bispo : 5 casas na diagonal superior direira
    for(int i = 1;i <=5;i++)
    {
        printf("Bispo : Casa : %d Cima Direita \n",i);


    }
    //Movimentação da torre : 5 casas na horizontal direita
    for(int i = 1;i <= 5 ;i++)
    {
        printf("Torre : Casa : %d Direita\n",i);
    }
    //Movimentação da rainha : 8 casas para esquerda
    for(int i  = 1; i<= 8 ;i++)
    {
        printf("Rainha : Casa : %d Esquerda\n",i);
    }

    //Movimento do cavalo
    for(int i = 1 ; i <=2;i++)
    {
        int cavalo = 1;
        while(cavalo == 1)
        {
            if(cavalo == 1)
            {
                 if(i == 2)
                {
                    printf("Cavalo : Casa baixo : %d Esquerda : %d\n",i,cavalo);
                    break;

                }
                printf("Cavalo : Casa baixo : %d\n",i);


                break;
            }
        }
    }


    return 0;
}
