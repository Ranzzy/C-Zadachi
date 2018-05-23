#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    double i, a, n, z;
    double s=0;
    cout << "Введите а: ";
    cin >> a;
    cout << "Введите n: ";
    cin >> n;
    for (i=2; i<=n; i++) {
        z=2*n-2;
        s=s+(1/pow(a,z));    
    }
    cout << "Последнее число " << n << endl;
    cout << "S = " << s+(1/a) << endl;
    return 0;
}