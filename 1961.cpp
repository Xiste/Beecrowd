#include <bits/stdc++.h>

int main()
{
    int pulo,cano,i;

    scanf("%d%d",&pulo,&cano);

    int quantidade[cano];

    for(i = 0; i<cano;i++){
        scanf("%d",&quantidade[i]);
    }
    for(i = 0; i<cano-1;i++){
        if(abs(quantidade[i]-quantidade[i+1])>pulo){
            printf("GAME OVER\n");
            break;
        }
    }
    if(i==cano-1){
        printf("YOU WIN\n");
    }
    return 0;
}
