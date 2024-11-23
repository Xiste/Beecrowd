#include <bits/stdc++.h>

int main(){

int x,y,soma=0;

scanf("%d%d",&x,&y);

while(y<=0){
    scanf("%d",&y);
}
for(int i=0; i<y;i++){
    soma+=x+i;
}printf("%d\n",soma);


return 0;}
