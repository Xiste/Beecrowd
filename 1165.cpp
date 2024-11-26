#include <bits/stdc++.h>

int main(){

int n,x,j,aux=0;

scanf("%d",&n);

for(int i = 0; i<n;i++){
    scanf("%d",&x);
    for(j = 1; j<=x;j++){
        if(x%j==0){
            aux++;
        }
    }if(aux==2){
        printf("%d eh primo\n",x);
    }else{
        printf("%d nao eh primo\n",x);
    }
    aux = 0;
}

return 0;}
