#include <bits/stdc++.h>
using namespace std;

int main(){
double A,B,C,tri,circu,trap,quadr,retan;
double pi = 3.14159;

scanf("%lf%lf%lf",&A,&B,&C);

tri = (A*C)/2.0;
circu = pi*(C*C);
trap = (A+B)*C/2;
quadr = B*B;
retan = A*B;
printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,circu,trap,quadr,retan);
return 0;
}
