#include <bits/stdc++.h>
using namespace std;

int main(){

char A[50];
double B,C,D;

scanf("%s",A);
scanf("%lf%lf",&B,&C);
D = B+(C/100*15);
printf("TOTAL = R$ %.2lf\n",D);
return 0;
}
