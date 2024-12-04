#include <bits/stdc++.h>

int main(){

    int x,n,aux=0,conta=0;

    scanf("%d",&x);

    for(int i = 0; i<x;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}
