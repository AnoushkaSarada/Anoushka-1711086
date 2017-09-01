#include <iostream>
using namespace std;

int main() {
	float cel=0.0,fr=0.0;
	cout<<"enter temperature in fahrenheit:\n";
	cin>>fr;
	cel=32-(5/9*fr);
	cout<<"temperture in celsius is:"<<cel<<endl;
	return 0;
}
