#include <bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,formula,formula2;

scanf("%d%d%d",&a,&b,&c);
formula = (a+b+abs(a-b))/2;
formula2 = (formula+c+abs(formula-c))/2;

printf("%d eh o maior\n",formula2);
return 0;
}
