#include <bits/stdc++.h>

using namespace std;

int main(){

    string a,b;
    int num=0,aux=0;
    while(aux<3){
        getline(cin,a);
        if(a=="caw caw"){
            printf("%d\n",num);
            num=0;
            aux++;
        }
        if(a[0]=='*'){
            num+=4;
        }if(a[1]=='*'){
            num+=2;
        }if(a[2]=='*'){
            num+=1;
        }
    }
    return 0;
    }
