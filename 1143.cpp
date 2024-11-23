#include <bits/stdc++.h>

int main(){

int x,n=1;

scanf("%d",&x);

for(int i = 1; i<=x;i++){
    n=i;
    for(int j = 0; j<3;j++){
        printf("%d",n);
        if(j!=2){
            printf(" ");
        }else{
            printf("\n");
        }
        n*=i;
    }

}
return 0;
}
