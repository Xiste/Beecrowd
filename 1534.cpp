#include <bits/stdc++.h>

int main(){

    int x;
    while(scanf("%d",&x)!=EOF){
        int m[x][x];

        for(int i = 0; i<x;i++){
            for(int j = 0; j<x;j++){
                if(i+j==x-1){
                    m[i][j]=2;
                }
                else if(i==j){
                    m[i][j]=1;
                }else{
                    m[i][j]=3;
                }
            }
        }
        for (int i = 0; i < x; i++){
            for (int j = 0; j < x; j++){
                printf("%d", m[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}
