#include <bits/stdc++.h>
using namespace std;

int main(){

double x;

scanf("%lf",&x);

if(x>25 && x<=50){
    printf("Intervalo (25,50]\n");
}
if(x>=0 && x<=25){
    printf("Intervalo [0,25]\n");
}
if(x>50 && x<=75){
    printf("Intervalo [0,25]\n");
}
if(x>75 && x<=100){
    printf("Intervalo (75,100]\n");
}
if(x<0 || x>100){
    printf("Fora de intervalo\n");
}
return 0;
}
