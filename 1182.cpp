#include <bits/stdc++.h>

int main(){

int x;
double M[12][12],b,soma=0;
char c;

scanf("%d %c",&x,&c);

for(int i = 0;i<12; i++){
    for (int j = 0; j<12;j++){
        scanf("%lf",&b);
        if(j==x){
            soma+= b;
        }
    }
}
if(c=='S'){
    printf("%.1lf\n",soma);
}else{
    printf("%.1lf\n",soma/12.0);
}
return 0;}
