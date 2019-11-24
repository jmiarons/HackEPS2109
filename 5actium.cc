#include <vector>
#include <iostream>
#include <map>
#include <utility>
#include <cmath>

using namespace std;


	return bitem[b_id] - disc + ship -soon;
}

int formulitaD () {
	return (int) formulitaT();
}

int main (){
  string row;
  map <int,double> costumT;
  map <int,int> costumD;
  map <int,double> bitems;
  while (getline(cin, row)){
	//lectura taula billitems
	bitems[b_id] = units*price-d1-d2;
	costumT[cost_id] += bitem[b_id]-disc-soon+ship;
	costumD[cost_id] += (int)(bitem[b_id]-disc-soon+ship);
  }
  for (int i = 0; i < map.size(); ++i) {
	  cout << costumT[i] -costumD[i] << endl;
  }
}
