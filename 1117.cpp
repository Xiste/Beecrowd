#include <stdio.h>

int main() {

double x,soma;
int aux1 =0,aux2=0;

while(aux2!=2){
    scanf("%lf",&x);
    if(x<0 || x>10){
        printf("nota invalida\n");
    }else{
        aux2++;
        soma+=x;
    }

}printf("media = %.2lf\n",soma/aux2);
    return 0;
}
