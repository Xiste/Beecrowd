#include <bits/stdc++.h>
using namespace std;

int main(){
int peca1,numpeca1,peca2,numpeca2;
float valor1,valor2,total;

scanf("%d%d%f%d%d%f",&peca1,&numpeca1,&valor1,&peca2,&numpeca2,&valor2);
total = numpeca1*valor1+numpeca2*valor2;
printf("VALOR A PAGAR: R$ %.2f\n",total);
return 0;
}
