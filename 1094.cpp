#include <bits/stdc++.h>

int main (){

int n,quantidade;
char animal[2];
int total;
int coelho=0,rato=0,sapo=0;

scanf("%d",&n);

for(int i = 0; i<n;i++){
    scanf("%d %s",&quantidade,animal);
    if(animal[0]=='C'){
        coelho += quantidade;
    }else if(animal[0]=='R'){
        rato += quantidade;
    }else if(animal[0]=='S'){
        sapo += quantidade;
    }
}
total=coelho+rato+sapo;

printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,coelho,rato,sapo);
printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",coelho*100.0/total,rato*100.0/total,sapo*100.0/total);
return 0;
}
