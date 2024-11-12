#include <bits/stdc++.h>
using namespace std;

int main(){

int x,cent;

scanf("%d",&x);
printf("%d\n",x);
cent = x/100;
printf("%d nota(s) de R$ 100,00\n",cent);

x=x%100;
cent = x/50;

printf("%d nota(s) de R$ 50,00\n",cent);
x=x%50;
cent = x/20;

printf("%d nota(s) de R$ 20,00\n",cent);
x=x%20;
cent = x/10;

printf("%d nota(s) de R$ 10,00\n",cent);
x=x%10;
cent = x/5;

printf("%d nota(s) de R$ 5,00\n",cent);
x=x%5;
cent = x/2;

printf("%d nota(s) de R$ 2,00\n",cent);
x=x%2;
cent = x/1;

printf("%d nota(s) de R$ 1,00\n",cent);
x=x%1;
cent = x/1;
return 0;
}
