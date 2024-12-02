#include <bits/stdc++.h>

int main(){

    int x,aux=0;

    scanf("%d",&x);

    while(aux<x){
        printf("Ho");
        if(aux==x-1){
            printf("!\n");
        }else{
            printf(" ");
        }
        aux++;
    }
    return 0;
}
