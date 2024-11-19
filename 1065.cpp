#include <bits/stdc++.h>
using namespace std;

int main(){

int numero;
int par = 0;
for(int i = 0; i<5;i++){
    scanf("%d",&numero);
    if(numero%2==0){
        par++;
    }
}
printf("%d valores pares\n",par);

return 0;
}
