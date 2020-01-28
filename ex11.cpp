#include<iostream>

using namespace std;

int main() {
    int a, b, k;
    cout<<"Introduceti 3 numere: ";
    cin>>a;cin>>b;cin>>k;
    if((a/b) % k == 0) {
        cout<<"Fractia poate fi simplificata cu al treilea numar!";
    }
    else {
        cout<<"Fractia nu poate fi simplificata cu numarul dat!";
    }
    return 0;
}