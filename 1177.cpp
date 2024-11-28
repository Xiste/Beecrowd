#include <bits/stdc++.h>

int main(){

int t,N[1000],i,aux=-1;

scanf("%d",&t);

while(aux!=1000){
    for(i = 0; i<t;i++){
        aux++;
        N[aux]= i;
    }
}
for(i=0; i<1000;i++){
    printf("N[%d] = %d\n",i,N[i]);
}

return 0;
}
