#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double i, a;
    double p=1;
    cout << "Введите а: ";
    cin >> a;
    for (i=2; i<=a; i++) {
        p=p*(1-(1/pow(i,2)));
    }
    cout << "p = " << p << endl;
    return 0;
}