#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Introduceti un numar: ";
    cin>>n;
    if(n>0) {
        cout<<"Numar pozitiv";
    }
    else if(n<0) {
        cout<<"Numar negativ";
    }
    else {
        cout<<"Numarul este neutru";
    }
    return 0;
}