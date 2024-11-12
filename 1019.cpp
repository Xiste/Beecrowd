#include <bits/stdc++.h>
using namespace std;

int main(){

int x,hora,minuto,segundo;

scanf("%d",&x);

hora = x/3600;
x = x%3600;
minuto = x/60;
x = x%60;
segundo = x;

printf("%d:%d:%d\n",hora,minuto,segundo);
return 0;
}
