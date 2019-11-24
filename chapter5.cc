#include <iostream>
#include <map>
#include <string>
#include <math.h>
using namespace std;

struct bill {
    int customer;
    long double dis;
    long double soon;
    long double ship;
    long double pricetot;
};

int main() {
    map<int, bill> b;
    int id, basura;
    long double units, price, dis1, dis2, aux2, aux3;
    bill aux;
    long double estafa = 0;
    long double sumanosal = 0;
    cin >> id;
    while (id != -1) {
        cin >> aux.customer >> aux.dis >> aux.soon >> aux.ship;
        aux.pricetot = 0.0;
        b[id] = aux;
        cin >> id;
    }
    while (cin >> basura >> id >> basura >> units >> price >> dis1 >> dis2) {
        aux2 = (units*price);
        aux2 -= aux2*(dis1/100);
        aux2 -= aux2*(dis2/100);
        b[id].pricetot += aux2;
        // cout << units << " " << price << " " << dis1 << " " << dis2;
    }
    for (pair<int, bill> i : b) {
        aux2 = i.second.pricetot;
	estafa += modf(((i.second.dis/100)+0.05),&units);
        aux2 -= aux2*(i.second.dis/100);
        aux2 -= aux2*(i.second.soon/100);
        //aux2 += i.second.ship;
        sumanosal += aux2;
    }
    cout << fixed << sumanosal << endl;
    cout << fixed << estafa << endl;
}
