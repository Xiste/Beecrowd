#include <stdio.h>

int main() {

int impar;
int aux=0;

scanf("%d",&impar);

for(int i=0; i<=impar; i++){
     if(i%2!=0){
         aux++;
         printf("%d\n",i);
     }
}

    return 0;
}
