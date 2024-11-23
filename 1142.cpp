#include <bits/stdc++.h>

int main(){

int x,n=1;

scanf("%d",&x);

for(int i = 0; i<x;i++){
    for(int j = n; j<=n+2;j++){
        printf("%d ",j);
    }
    printf("PUM\n");
    n+=4;
}

return 0;
}
