#include <iostream>

using namespace std;

int main() {
    int arr[10];
    for (int i=0; i<10; i++){
        cout << "[" << i+1 << "]" << ":";
        cin >> arr[i];
    }

    cout << "Массив: ";
    for (int i=0; i<10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}