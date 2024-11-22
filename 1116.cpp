#include <stdio.h>

int main() {

int n,x,y;
float calc;

scanf("%d",&n);

for(int i = 0; i<n;i++){
    scanf("%d%d",&x,&y);
    if(y==0) {
        printf("divisao impossivel\n");

    }
    else {
        calc= (float)x/y;
        printf("%.1f\n",calc);
    }
}

    return 0;
}
