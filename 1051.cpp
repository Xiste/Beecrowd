#include <bits/stdc++.h>;
using namespace std;

int main(){

double salario;

scanf("%lf",&salario);


if(salario<=2000.00){
    printf("Isento\n");
}
else if(salario>= 2000.01 && salario<=3000.00){
    salario = (salario -2000.00)*0.08;
    printf("R$ %.2lf\n",salario);
}
else if(salario>= 3000.01 && salario<=4500.00){
    salario = (salario -3000.00)*0.18 + 1000.00*0.08;
    printf("R$ %.2lf\n",salario);
}
else if(salario>= 4500.01){
    salario = (salario -4500.00)*0.28+1500.00*0.18 + 1000.00*0.08;
    printf("R$ %.2lf\n",salario);
}
return 0;
}

