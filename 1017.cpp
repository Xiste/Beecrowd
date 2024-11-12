#include <bits/stdc++.h>
using namespace std;

int main(){
int temp,vel,distancia;
double kml;
scanf("%d%d",&temp,&vel);

distancia = temp*vel;
kml = distancia/12.0;

printf("%.3lf\n",kml);
return 0;
}
