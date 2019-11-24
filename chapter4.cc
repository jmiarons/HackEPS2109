#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> MI;
typedef vector<bool> VB;
typedef vector<VB> MB;


void print_mat(const MB& m) {
    VI aux(10, 0);
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (m[i][j]) aux[i]++;
        }
    }
    for (int i = 0; i<10; i++) {
        cout << i << " --> " << aux[i] << endl;
    }
}

int main() {
    MB m(10, VB(10, false));
    VI v(50);
    VB seen(10, false);
    int i = 0;
    while (cin>>v[i]) i++;
    for (int i = 0; i<v.size(); i++) {
        seen[v[i]/100] = seen[(v[i]/10)%10] = seen[v[i]%10] = true;
        m[(v[i]/100)%10][(v[i]/10)%10] = true;
        m[(v[i]/100)%10][v[i]%10] = true;
        m[(v[i]/10)%10][v[i]%10] = true;
    }
    for (int i = 0; i<10; i++) {
        cout << seen[i] << endl;
    }
    print_mat(m);
}
