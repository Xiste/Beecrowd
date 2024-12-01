#include <bits/stdc++.h>

int main(){

    int A,B,C,casa;
    double x;
    scanf("%d%d%d",&A,&B,&C);

    while(A!=0){

        casa= A*B;

        x = casa*100.0/C;
        x = sqrt(x);
        x = trunc(x);
        printf("%.0lf\n",x);

        scanf("%d%d%d",&A,&B,&C);
    }
    return 0;
}
