#include <bits/stdc++.h>

int main() {

int x,x1,aux=0,aux1=0;

scanf("%d",&x);


for(int i = 0; i<x;i++){
    scanf("%d",&x1);
    if(x1>=10 && x1<=20){
        aux++;
    }
    else{
        aux1++;
    }
}
printf("%d in\n%d out\n",aux,aux1);


return 0;
}
