#include <bits/stdc++.h>
using namespace std;

int main(){

int numero,par = 0,impar=0,positivo=0,negativo=0;
for(int i = 0; i<5;i++){
    scanf("%d",&numero);
    if(numero%2==0){
        par++;
    }
    if(numero<0){
        negativo++;
    }
    if(numero%2!=0){
        impar++;
    }
    if(numero>0){
        positivo++;
    }
}
printf("%d valor(es) par(es)\n",par);
printf("%d valor(es) impar(es)\n",impar);
printf("%d valor(es) positivo(s)\n",positivo);
printf("%d valor(es) negativo(s)\n",negativo);

return 0;}
