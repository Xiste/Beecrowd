#include <bits/stdc++.h>

int main (){

int par[5],impar[5],x,auxpar=0,auximpar=0;

for(int i = 0; i<15;i++){
    scanf("%d",&x);
    if(x%2==0){
        par[auxpar] =x;
        auxpar++;
    }else{
        impar[auximpar]=x;
        auximpar++;
        }
    if(auxpar==5){
        for(int i = 0; i<5;i++){
            printf("par[%d] = %d\n",i,par[i]);
        }
        auxpar=0;
    }
    if(auximpar==5){
        for(int i = 0; i<5;i++){
            printf("impar[%d] = %d\n",i,impar[i]);
        }
        auximpar=0;
    }
}

for(int i = 0; i<auximpar;i++){
    printf("impar[%d] = %d\n",i,impar[i]);
}
for(int i = 0; i<auxpar;i++){
    printf("par[%d] = %d\n",i,par[i]);
}
return 0;
}
