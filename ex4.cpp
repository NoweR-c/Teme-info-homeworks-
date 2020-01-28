#include<iostream>

using namespace std;

int main() {
    int a, m, s, z, u;
    cout<<"Introduceti un numar de 4 cifre: ";
    cin>>a;
    m=a/1000;
    s=a/100%10;
    z=a/10%10;
    u=a%10;
    cout<<m<<endl<<s<<endl<<z<<endl<<u<<endl;
    return 0;
}