#include <bits/stdc++.h>
using namespace std;

int main(){

int idade,ano,mes,dia;

scanf("%d",&idade);

ano = idade/365;
printf("%d ano(s)\n",ano);

idade = idade%365;

mes = idade/30;
printf("%d mes(es)\n",mes);

dia = idade%30;

printf("%d dia(s)\n",dia);
return 0;
}

