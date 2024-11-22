#include <bits/stdc++.h>

int main(){

int x,y,resultado=0,aux;

scanf("%d%d",&x,&y);

if(y>x){
    aux = x;
    x = y;
    y = aux;
}

for(int i = y; i<=x;i++){
    if(i%13!=0){
     resultado += i;
    }
}printf("%d\n",resultado);

return 0;
}
