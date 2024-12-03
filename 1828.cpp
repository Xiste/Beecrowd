#include <bits/stdc++.h>

using namespace std;
int main (){

    int x,aux=1;

    scanf("%d",&x);

    while(aux<=x){

    string a,b;

    cin>>a>>b;

        if(a==b){
            printf("Caso #%d: De novo!\n",aux);
        }
        else if((a=="lagarto" && b=="papel")||
                (a=="lagarto" && b=="Spock")||
                (a=="tesoura" && b=="papel")||
                (a=="tesoura" && b=="lagarto")||
                (a=="papel" && b=="pedra")||
                (a=="papel" && b=="Spock")||
                (a=="Spock" && b=="tesoura")||
                (a=="Spock" && b=="pedra")||
                (a=="pedra" && b=="lagarto")||
                (a=="pedra" && b=="tesoura")){
            printf("Caso #%d: Bazinga!\n",aux);
        }else{
            printf("Caso #%d: Raj trapaceou!\n",aux);
        }
        aux++;

    }
    return 0;
}
