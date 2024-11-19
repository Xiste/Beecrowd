#include <bits/stdc++.h>
using namespace std;

int main(){

float numero,soma = 0;
int positivo = 0;

for (int i = 0; i<6; i++){
    scanf("%f",&numero);
    if(numero>0){
        soma += numero;
        positivo++;
    }
}
printf("%d valores positivos\n%.1f\n",positivo,soma/positivo);
return 0;
}
