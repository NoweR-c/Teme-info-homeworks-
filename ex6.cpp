#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin>>a;cin>>b;cin>>c;
    if(a > b) {
      if(a > c){
      cout<<a;
      }
    }
    else if(b > a) {
      if(b>c) {
        cout<<b;
      }
    }
    else {
        cout<<c;
    }
    return 0;
}
