#include <bits/stdc++.h>

int main(){

double aux =1;

for(double i = 0; i<=2;i+=0.2){
    for(double j= aux; j<aux+3;j++){
        if(i==0 || i== 1 || i>=1.9)printf("I=%.0lf J=%.0lf\n",i,j+i);
        else printf("I=%.1lf J=%.1lf\n",i,j+i);
    }
}
return 0;
}
