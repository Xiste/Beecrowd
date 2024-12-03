#include <bits/stdc++.h>

int main(){


    int x;

    while(scanf("%d",&x)!= EOF){

    int M[x][x];
    int um = x/3,metade = x/2;
    for(int i = 0; i<x;i++){
        for(int j = 0;j<x;j++){


            if(i==metade && j== metade){
                M[i][j]=4;
            }
            else if(i>=um && j>=um && j<x-um && i<x-um){
                M[i][j]=1;
            }
            else if(i+j==x-1){
                M[i][j] = 3;
            }
            else if(i==j){
                M[i][j]=2;
            }
            else{
                M[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("%d", M[i][j]);
        }printf("\n");
    }printf("\n");
}
    return 0;
}
