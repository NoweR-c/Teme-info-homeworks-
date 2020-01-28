#include<iostream>

using namespace std;

int main() {
    int x=2, y=7, z, u;
    u=x*(y-2)%3;//u = 2 * 5 % 3 = 1
    z = u + x; // z = 1 + 2 = 3
    x = x * y; //x = 2 * 7 => new X = 14
    cout<<"x= "<<x<<"y= "<<y<<"z= "<<z<<"u="<<u<<endl;//x = 14 y= 7 z = 3 u= 1
    x=-y*z%3+u; //x = -7 * 3 % 3 + 1 => new X = 1
    cout<<"x="<<x<<endl;
    z=(x-y)*(u-x);//z = (1-7) * (1-1) = -6 * 0 => new Z = 0
    cout<<"Z="<<z;
    return 0;
}