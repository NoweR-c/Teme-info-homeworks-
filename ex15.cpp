#include<iostream>

using namespace std;

int main() {
    int n, a, b, c, x, w, q;
    cout<<"n= ";cin>>n;
    a=n/100;
    b=n/10%10;
    c=n%10;
    (a>b ? x=a, a=b, b=x : x);
    (b>c ? x=b, b=c, c=x : x);
    (a>b ? x=a, a=b, b=x : x);
    cout<<a<<" "<<b<<" "<<c<<endl;
    w=a*100+b*10+c;
    q=c*100+b*10+a;
    cout<<w<<" "<<q;
    return 0;
}
/*
n= 815
1 5 8
158 851
 */