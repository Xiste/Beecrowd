#include <bits/stdc++.h>

int main(){

    int a,b,c,d;

    bool caso1,caso2,caso3,caso4;

    scanf("%d%d%d%d",&a,&b,&c,&d);

    caso1 = a<b+c && b<a+c && c<a+b;

    caso2 = a<d+c && d<c+a && c<d+a;

    caso3 = d<b+a && a<b+d && b<a+d;

    caso4 = c<b+d && d<c+b && b<c+d;

    if(caso1 || caso2 || caso3 || caso4){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;

}
