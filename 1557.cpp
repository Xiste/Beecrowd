#include <bits/stdc++.h>

int main(){

    int n,valor1=1,valor2=valor1;
    scanf("%d",&n);

    while(n!=0){

        int M[n][n],contador=0;
        valor1=1;
        valor2=valor1;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n;j++){
                M[i][j] = valor2;
                valor2*=2;
            }
            valor1*=2;
            valor2=valor1;
        }
        int teste = M[n-1][n-1];

        while(teste>0){
            teste/=10;
            contador++;
        }

        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                printf("%*d",contador,M[i][j]);
                if(j==n-1){
                    printf("\n");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}
