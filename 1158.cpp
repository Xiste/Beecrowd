#include <bits/stdc++.h>

int main(){

int n,x,y,i,j,aux=0,soma=0;

scanf("%d",&n);

for(i=0; i<n;i++){
    soma = 0;
    aux = 0;
    scanf("%d %d",&x,&y);

    for(j=x;aux!=y;j++){
        if(j%2!=0){
            soma+=j;
            aux++;
        }
    }
    printf("%d\n",soma);
}

return 0;
}
