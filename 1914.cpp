#include <bits/stdc++.h>

using namespace std;
int main(){

    int x,numero,numero2,total;

    scanf("%d",&x);

    string a,b,y,z;

    for(int i =0; i<x;i++){

        cin>>a>>b>>y>>z;

        cin>>numero>>numero2;

        total= numero+numero2;

        if(total%2==0){
            if(b=="PAR"){
                cout<<a<<endl;
            }else{
                cout<<y<<endl;
            }
        }else{
            if(b=="IMPAR"){
                cout<<a<<endl;
            }else{
                cout<<y<<endl;
            }
        }
    }
    return 0;
}
