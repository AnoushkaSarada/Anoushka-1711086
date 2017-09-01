#include <iostream>
using namespace std;

int main() {
	float c=0.0,m=0.0,k=0.0;
	cout<<"enter length in cm:";
	cin>>c;
	m=c/100;
	k=m/1000;
	cout<<"length in meter:"<<m<<endl;
	cout<<"length in km:"<<k<<endl;

	return 0;
}
