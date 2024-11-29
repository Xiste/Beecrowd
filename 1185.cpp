#include <bits/stdc++.h>

int main(){

char c;
double M[12][12],soma=0;

scanf("%c",&c);

for(int i = 0; i<12;i++){
    for(int j = 0; j<12;j++){
        scanf("%lf",&M[i][j]);
        if(i+j<=10){
            soma+=M[i][j];
        }
    }
}
if(c=='S'){
    printf("%.1lf\n",soma);
}else{
    printf("%.1lf\n",soma/66.0);
}
return 0;
}
