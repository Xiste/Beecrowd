#include <bits/stdc++.h>
using namespace std;

int main(){

int diai,horai,mini,segi,diaf,horaf,minf,segf,calc;
char x[4];

scanf("%s %d %d %s %d %s %d %s %d %d %s %d %s %d",x,&diai,&horai,x,&mini,x,&segi,x,&diaf,&horaf,x,&minf,x,&segf);

diai = diai*86400+horai*3600+mini*60+segi;
diaf = diaf*86400+horaf*3600+minf*60+segf;

calc = diaf - diai;

diai = calc/86400;
calc  = calc%86400;

horai = calc/3600;
calc  = calc%3600;

mini = calc/60;
calc = calc%60;

segi = calc;

printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",diai,horai,mini,segi);

return 0;
}
