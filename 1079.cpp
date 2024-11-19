#include <bits/stdc++.h>

int main(){

int n;
double n1,n2,n3;

scanf("%d",&n);

for(int i = 0; i<n;i++){
    scanf("%lf%lf%lf",&n1,&n2,&n3);
    printf("%.1lf\n",(n1*2+n2*3+n3*5)/10.0);
    }
return 0;
}
