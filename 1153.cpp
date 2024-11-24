#include <bits/stdc++.h>

int main (){

int n,soma=1;
scanf("%d",&n);

for(int i = 1; i<=n; i++){
   soma *=i;
}
printf("%d\n",soma);

return 0;
}
