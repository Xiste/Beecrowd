#include <bits/stdc++.h>

int main(){

int aux = 7;
for(int i = 1; i<=9;i+=2){
    for(int j = aux; j>aux-3;j--){
        printf("I=%d J=%d\n",i,j);
    }
    aux= aux+2;
}
return 0;
}
