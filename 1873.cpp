#include <bits/stdc++.h>

int main(){

    int a,b,r,q;

    scanf("%d%d",&a,&b);

    for(int i =0; i<abs(b);i++){
        for(int j = -1000; j<1000;j++){
            if(a==b*j+i){
                r = i;
                q = j;
                break;
            }
        }
    }
    printf("%d %d\n",q,r);
    return 0;
}
