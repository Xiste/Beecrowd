#include <bits/stdc++.h>

int main(){

int x,y,i,soma=0,aux=0;



scanf("%d%d",&x,&y);
while(y<x+1){
    scanf("%d",&y);
}
for(i=x ; soma<y;i++){
        soma+=i;
        aux++;
}
printf("%d\n",aux);

return 0;
}
