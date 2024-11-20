#include <bits/stdc++.h>
using namespace std;

int main(){

int inicio,fim,calc;

scanf("%d%d",&inicio,&fim);

if(inicio>fim){
    calc = 24-inicio+fim;
    printf("O JOGO DUROU %d HORA(S)\n",calc);
}
else if(inicio==fim){
    printf("O JOGO DUROU 24 HORA(S)\n");
}
else {
    calc = fim-inicio;
    printf("O JOGO DUROU %d HORA(S)\n",calc);
}
return 0;
}

