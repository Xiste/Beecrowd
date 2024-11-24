#include <bits/stdc++.h>

int main(){

double aux=1;
double soma =0;

for(double i =1; i<40; i+=2){

    soma+=i/aux*1.0;
    aux*=2;
}printf("%.2f\n",soma);


return 0;
}
