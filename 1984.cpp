#include <bits/stdc++.h>

int main(){

    int tamanho;

    char x[11];

    scanf("%s",x);

    tamanho = strlen(x);

    for(int i = tamanho-1; i>=0;i--){
        printf("%c",x[i]);
    }

    printf("\n");
    return 0;
    }
