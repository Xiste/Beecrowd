#include <bits/stdc++.h>
using namespace std;

int main(){

int hora,minui,horaf,minuf,calc;

scanf("%d%d%d%d",&hora,&minui,&horaf,&minuf);


hora = hora*60 + minui;
horaf = horaf*60 + minuf;


if(hora>horaf){
    calc = 24*60 - hora+horaf;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",calc/60,calc%60);
}
else if(hora==horaf){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
else{
    calc = horaf-hora;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",calc/60,calc%60);
}
return 0;
}

