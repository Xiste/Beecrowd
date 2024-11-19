#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int> vetor;

int y[3];
int x;

for(int i = 0; i<3;i++){
    scanf("%d",&x);
    vetor.push_back(x);
    y[i]=x;
}
sort(vetor.begin(),vetor.end());
for(int i = 0; i<3;i++){
    printf("%d\n",vetor[i]);
}
printf("\n");
for(int i = 0; i<3;i++){
    printf("%d\n",y[i]);
}
return 0;
}

