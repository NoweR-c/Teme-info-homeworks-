#include<iostream>

using namespace std;

int main() {
    int x=2, y, z;
    cin>>y;
    x++;
    z=y+3*x;
    cout<<((z%2==0 && x >= 1) ? 1 : 0);
    //orice numar impar
    return 0;
}
