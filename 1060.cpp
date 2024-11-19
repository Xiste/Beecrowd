#include <bits/stdc++.h>
using namespace std;

int main(){


float numero;
int positivo = 0;

for(int i = 0; i<6;i++){
    scanf("%f",&numero);
    if(numero > 0){
        positivo++;
    }
}
printf("%d valores positivos\n",positivo);
return 0;
}
