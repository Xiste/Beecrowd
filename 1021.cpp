#include <bits/stdc++.h>
using namespace std;

int main(){

double y;
int x,valor;

scanf("%lf",&y);

x = y*100;
valor = x/10000;
printf("NOTAS:\n");

printf("%d nota(s) de R$ 100.00\n",valor);

x = x%10000;
valor = x/5000;

printf("%d nota(s) de R$ 50.00\n",valor);

x = x%5000;
valor = x/2000;

printf("%d nota(s) de R$ 20.00\n",valor);

x = x%2000;
valor = x/1000;

printf("%d nota(s) de R$ 10.00\n",valor);

x = x%1000;
valor = x/500;

printf("%d nota(s) de R$ 5.00\n",valor);

x = x%500;
valor = x/200;

printf("%d nota(s) de R$ 2.00\n",valor);

x = x%200;
valor = x/100;

printf("MOEDAS:\n");

printf("%d moeda(s) de R$ 1.00\n",valor);

x = x%100;
valor = x/50;

printf("%d moeda(s) de R$ 0.50\n",valor);

x = x%50;
valor = x/25;

printf("%d moeda(s) de R$ 0.25\n",valor);

x = x%25;
valor = x/10;

printf("%d moeda(s) de R$ 0.10\n",valor);

x = x%10;
valor = x/5;

printf("%d moeda(s) de R$ 0.05\n",valor);

x = x%5;
valor = x/1;

printf("%d moeda(s) de R$ 0.01\n",valor);

return 0;
}
