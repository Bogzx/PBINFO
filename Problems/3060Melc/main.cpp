#include <iostream>
#include <cmath>

/*
Cerința
Un melc se deplasează cu viteza de v km/h. El trebuie să parcurgă distanța de d metri. Să se determine în câte minute va parcurge melcul această distanță.

Date de intrare
Programul citește de la tastatură numărul real v și numarul natural d, separate prin spații.

Date de ieșire
Programul va afișa pe ecran numărul întreg t, reprezentând timpul exprimat în minute în care melcul va parcurge distanța d.

Restricții și precizări
v este număr real;
0 < d < 1.000.000.000*/


using namespace std;

int main(){
    float v;
    float d,calcul;
    cin>>v>>d;
    calcul=(d*6)/(v*100);
    cout<<ceil(calcul);



return 0;
}