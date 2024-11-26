#include <bits/stdc++.h>

int main(){

int t,j,PA,PB,newPA,newPB;
float G1,G2;

scanf("%d",&t);

for(int i = 0; i<t;i++){
    scanf("%d%d%f%f",&PA,&PB,&G1,&G2);

    for(j = 0; PA<=PB;j++){
        newPA = (PA/100.0)*G1;
        newPB = (PB/100.0)*G2;
        PA = newPA+PA;
        PB = newPB+PB;
        if(j==101){
            break;
        }
    }
    if(j>100){
        printf("Mais de 1 seculo.\n");
    }
    else{printf("%d anos.\n",j);
    }
}
return 0;
}
