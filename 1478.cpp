#include <bits/stdc++.h>

int main(){

    int x;

    scanf("%d",&x);


    while(x!=0){

        int M[x][x],valor;

        for(int i = 0; i<x;i++){
            for(int j = 0;j<x;j++){
                if(i==j){
                    M[i][j]=1;
                }
                else if(i<j){
                    M[i][j] = j-i+1;
                }else{
                    M[i][j] = i-j+1;
                }

            }
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
