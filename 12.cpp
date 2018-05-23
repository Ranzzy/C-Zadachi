#include <iostream>

using namespace std;

int main() {
    int i, sum=0, fact=1, n;
    cout << "Введите n: ";
    cin >> n;
    for (i=1; i<=n; i++){
        fact = fact*i;
        sum = sum+fact;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}