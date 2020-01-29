#include<iostream>
#include<cmath>

using namespace std; 

int main() {
	int a, b, c, sp=0, ar=0;
	start:cout<<"Latura 1: ";cin>> a;
	cout<<"Latura 2: ";cin>> b;
	cout<<"Latura 3: ";cin>> c;
	if(a == b+c || b == a+c || c == a+b) {
		cout<<"Triunghi invalid! Va rog introduceti valorile corecte!";
		goto start;
	}
	sp = (a + b + c)/2;
	ar = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	cout<<"Semiperimetrul este: "<<sp<<endl;
	cout<<"Aria este: "<<ar;
    return 0;
};
