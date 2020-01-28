#include<iostream>

using namespace std;

int main() {
    int a, b;
    cout<<"Introduceti doua numere: ";
    cin>>a;cin>>b;
    if(b == a+1) {
        cout<<"Numerele sunt consecutive";
    }
    else {
        cout<<"Numerele nu sunt consecutive";
    }
    return 0;
}