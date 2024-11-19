#include <bits/stdc++.h>

int main(){

int n, maior = 0, aux = 0;

for(int i = 1; i<=100;i++){
    scanf("%d",&n);
    if(maior<n){
        maior=n;
        aux = i;
    }

}
printf("%d\n%d\n",maior,aux);
return 0;
}
