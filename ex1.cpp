#include<iostream>

using namespace std;

int main() {
    int m, h, s;
    cout<<"introduceti minutele:";
    cin>>m;
    h = m/60;
    s=m*60;
    cout<<"Timpul dvs. exprimat in ore: "<<h<<"si exprimat in minute: "<<s;
    return 0;
}