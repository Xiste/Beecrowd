#include <bits/stdc++.h>

int main(){

int x,menor = 0,aux=0;

scanf("%d",&x);

int n[x];

for(int i = 0;i<x;i++){
    scanf("%d",&n[i]);
}
menor = n[0];
for(int i = 0; i<x;i++){
    if(n[i]<menor){
        menor = n[i];
        aux = i;
    }
}printf("Menor valor: %d\nPosicao: %d\n",menor,aux);

return 0;
}
