#include <bits/stdc++.h>
using namespace std;

int main(){

double A,B,C,D,E,media,media2;

scanf("%lf%lf%lf%lf",&A,&B,&C,&D);

media = (A*2+B*3+C*4+D)/10;

printf("Media: %.1lf\n",media);

if(media>= 7){
    printf("Aluno aprovado.\n");
}
else if(media< 5){
    printf("Aluno reprovado.\n");
}
else if(media>= 5 && media<6.9){
    printf("Aluno em exame.\n");
    scanf("%lf",&E);
    printf("Nota do exame: %.1lf\n",E);
    media2 = (media+E)/2;
    if(media>=5){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",media2);
}

return 0;
}

