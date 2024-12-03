#include <bits/stdc++.h>

int main (){

    int n,menor=0;

    scanf("%d",&n);

    int m[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&m[i]);
    }
    for(int i = 0; i<n;i++){
        if(m[i]< m[menor]){
            menor= i;
        }
    }
    printf("%d\n",menor+1);
    return 0;}
