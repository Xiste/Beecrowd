#include <bits/stdc++.h>
using namespace std;

int main(){

double A,B,C;

vector<double>vetor(3);

for(int i = 0; i<3; i++){
    scanf("%lf",&vetor[i]);
}

sort(vetor.begin(), vetor.end(), greater<double>());

A = vetor[0];
B = vetor[1];
C = vetor[2];

if( A>= B+C){
    printf("NAO FORMA TRIANGULO\n");
}
else{
    if ((A*A)==(B*B+C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((A*A)>(B*B+C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((A*A)<(B*B+C*C)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B || B==C || A==C){
        printf("TRIANGULO ISOSCELES\n");
    }
}
return 0;
}

