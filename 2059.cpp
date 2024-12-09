#include <bits/stdc++.h>

int main()
{
    int p, j1, j2, r, a,total;

    scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);

    total=j1+j2;

    if(p==1){ // j1 eh par
        if(total%2==0 && r==0) printf("Jogador 1 ganha!\n");
        else if(total%2==0 && r==1 && a==1) printf("Jogador 2 ganha!\n");
        else{ // impar
            if(r==1){
                if(a==1){
                    printf("Jogador 2 ganha!\n");
                }
                else{
                    printf("Jogador 1 ganha!\n");
                }
            } else{
                printf("Jogador 2 ganha!\n");
            }
        }
    } else{ // j1 eh impar
        if(total%2!=0 && r==0) printf("Jogador 1 ganha!\n");
        else if(total%2!=0 && r==1 && a==1) printf("Jogador 2 ganha!\n");
        else{
            if(r==1){
                if(a==1){
                    printf("Jogador 2 ganha!\n");
                }
                else{
                    printf("Jogador 1 ganha!\n");
                }
            }
            else{
                printf("Jogador 2 ganha!\n");
            }
        }
    }
    return 0;
}
