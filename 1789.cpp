#include <bits/stdc++.h>

int main(){

    int x;

    while(scanf("%d",&x)!= EOF){
        int M[x],maior,numb;


        for(int i = 0; i<x;i++){
            scanf("%d",&M[i]);
        }

        maior = M[0];

        for(int i = 0; i < x; i++){
            if(M[i]>maior){
                maior= M[i];
            }
        }

        if(maior < 10){
            printf("1\n");
        }else if(maior>=20){
            printf("3\n");
        }else if(maior>=10 && maior<20){
            printf("2\n");
        }
    }
    return 0;
}
