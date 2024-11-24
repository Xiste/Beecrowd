#include <bits/stdc++.h>

int main(){

int x,aux=0,soma=0;

scanf("%d",&x);
while(x>0){
    soma+=x;
    scanf("%d",&x);
    aux++;

}printf("%.2f\n",(float)soma/aux);

return 0;}
