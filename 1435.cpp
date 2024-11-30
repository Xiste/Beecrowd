#include <bits/stdc++.h>

int main(){

int x;

scanf("%d",&x);

while(x!=0){

    int bordaesq=0,bordadir=x-1,valor=1,valorfinal;
    if(x%2!=0){
        valorfinal=(x+1)/2;
    }else{
        valorfinal = x/2;
    }

    int M[x][x];

    while(valor<=valorfinal){
        for(int i = bordaesq; i<=bordadir; i++){
            for( int j = bordaesq; j<=bordadir; j++){
                if(i==bordaesq || j==bordaesq || i==bordadir || j==bordadir){
                    M[i][j]= valor;
                }

            }
        }
        valor++;
        bordaesq++;
        bordadir--;
}
    for(int i = 0; i<x; i++){
        for( int j = 0; j<x; j++){
            if(j==x-1){
                printf("%3d\n",M[i][j]);
            }else{
                printf("%3d ",M[i][j]);
            }
        }
    }
    scanf("%d",&x);
    printf("\n");
}
return 0;
}
