#include <bits/stdc++.h>

int main(){

int x,aux,soma;

do{
    scanf("%d",&x);
    soma = 0;
    aux = 0;
    if(x!=0){
        for(int j = x; aux!=5;j++){
            if(j%2==0){
                soma+=j;
                aux++;
            }
        }
    printf("%d\n",soma);
    }
}while(x!=0);

return 0;}
