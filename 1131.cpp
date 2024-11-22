#include <bits/stdc++.h>

int main(){

int x,y,opcao,aux=0,quantidade=0,gremio=0,inter=0,empate=0;

do{
    aux=0;
    opcao =0;
    for(int i = 0; i <1;i++){
       scanf("%d%d",&x,&y);
       if(x>y){
            inter++;
       }else if(y>x){
            gremio++;
       }else{
            empate++;
       }
       aux++;
    }
    quantidade +=aux;

    do{
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&opcao);
    }while(opcao!=1 && opcao!=2);

}while(opcao==1);
printf("%d grenais\n",quantidade);
printf("Inter:%d\nGremio:%d\nEmpates:%d\n",inter,gremio,empate);
if(gremio>inter){
        printf("Gremio venceu mais\n");
    }else if(inter>gremio){
        printf("Inter venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }

return 0;
}
