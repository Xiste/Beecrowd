#include <bits/stdc++.h>

int main(){

int x,a=0,b=1,aux=0;

scanf("%d",&x);

while(x>46){
    scanf("%d",&x);
}

if(x==1)printf("0\n");
if(x==2)printf("0 1\n");
if(x>2)printf("0 1 ");


for(int i = 3; i<=x; i++){
    aux= a+b;
    a = b;
    b=aux;
    printf("%d",aux);
    if(i<x)printf(" ");
}
printf("\n");

return 0;
}
