#include<iostream>

using namespace std;

int main() {
    char c;
    cout<<"Introduceti caracterul dvs. :";
    cin<<c;
    if(c <= 'a' && c >= 'z')
      cout<<"Litera mica";
    else if(c <= 'A' && c >= "Z")
      cout<<"Litera mare";
    else 
      cout<<"Nu este litera!";
    return 0;
}