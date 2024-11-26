#include <bits/stdc++.h>

int main (){


int x,n;

scanf("%d",&x);
long long int N[60];
N[0] = 0;
N[1] = 1;
N[2] = 1;

for(int i = 0; i<x;i++){
    scanf("%d",&n);
    for(int j = 3; j<=n;j++){
        N[j] = N[j-1] + N[j-2];

    }printf("Fib(%d) = %lld\n",n,N[n]);
}

return 0;
}
