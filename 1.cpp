#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int cnt=0,N;
    cout<<"Enter N -> ";
    cin>>N;
    while(N)
    {
        N/=10;
        cnt++;
    }
    cout<<"\nResult -> "<<cnt;
    return 0;
}