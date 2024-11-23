#include <bits/stdc++.h>

int main(){

int x,y;

scanf("%d%d",&x,&y);

for(int i = 1; i<=y;){
    for(int j = 0; j<x; j++){
        printf("%d",i);
        if(j!=x-1){
            printf(" ");
        }
        i++;
    }printf("\n");
}

return 0;
}
