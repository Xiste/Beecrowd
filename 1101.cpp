#include <bits/stdc++.h>

int main(){

int m,n,soma=0;



scanf("%d %d",&m,&n);
while(m>0 && n>0){
    if(m<n){
        int aux = m;
        m = n;
        n = aux;
    }
        for( int i = n; i<=m; i++){
            printf("%d ",i);
            soma+=i;
        }
        printf("Sum=%d\n",soma);
        soma = 0;
        scanf("%d%d",&m,&n);
    }
return 0;
}
