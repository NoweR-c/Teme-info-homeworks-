#include<iostream>

using namespace std;

int main() {
    int a;
    cout<<"Introduceti un numar de 3 cifre: ";
    cin>>a;
    a=a/100*10+a%10;
    cout<<a;
    return 0;
}