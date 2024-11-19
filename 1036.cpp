#include <bits/stdc++.h>
using namespace std;

int main(){

double A,B,C,raiz,x1,x2;

scanf("%lf%lf%lf",&A,&B,&C);

raiz = sqrt(pow(B,2)-4*A*C);
x1 = (-B+raiz)/(2*A);
x2 = (-B-raiz)/(2*A);

if(raiz>0 && A!=0){
printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
}
else{
    printf("Impossivel calcular\n");
}
return 0;
}

