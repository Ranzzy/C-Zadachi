#include <iostream>

using namespace std;

int main() {
    int i, a;
    int mult = 1;
    cout << "Введите а: ";
    cin >> a;
    for (i=1; i<=a; i++){
        mult = mult * i;
    }
    cout << "Факториал = " << mult << endl;
    return 0;
}