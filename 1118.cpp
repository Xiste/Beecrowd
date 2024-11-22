#include <stdio.h>

int main() {

double x,soma=0;
int y,aux = 0;

do
{
    soma= 0;
    aux = 0;

    while(aux!=2){
        scanf("%lf",&x);

        if(x<0 || x>10){
            printf("nota invalida\n");
        }else{
            aux++;
            soma+=x;
        }
    }

    printf("media = %.2lf\n",soma/2.0);

    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&y);
    }while (y!=1 && y!=2);

}while(y==1);


return 0;
}
