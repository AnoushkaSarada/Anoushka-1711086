#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int p,t,r;
	float ci;
	cout<<"enter Principle,time,rate\n";
	cin>>p>>t>>r;
	ci=(p*pow((1+r/100),t))-p;
	cout<<"your compound interest is "<<ci;
            
	return 0;
}
