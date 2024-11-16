#include <bits/stdc++.h>
using namespace std;

int main(){

double x,reajuste,salario_atual;

scanf("%lf",&x);

if(x>=0 && x<=400){
    reajuste = x*0.15;
    salario_atual = reajuste + x;

    printf("Novo salario: %.2lf\n",salario_atual);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: 15 %%\n");
}
else if(x>=400.01 && x<=800){
    reajuste = x*0.12;
    salario_atual = reajuste + x;

    printf("Novo salario: %.2lf\n",salario_atual);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: 12 %%\n");
}
else if(x>=800.01 && x<=1200){
    reajuste = x*0.10;
    salario_atual = reajuste + x;

    printf("Novo salario: %.2lf\n",salario_atual);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: 10 %%\n");
}
else if(x>=1200.01 && x<=2000){
    reajuste = x*0.07;
    salario_atual = reajuste + x;

    printf("Novo salario: %.2lf\n",salario_atual);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: 7 %%\n");
}
else{
    reajuste = x*0.04;
    salario_atual = reajuste + x;

    printf("Novo salario: %.2lf\n",salario_atual);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: 4 %%\n");
}
return 0;
}
