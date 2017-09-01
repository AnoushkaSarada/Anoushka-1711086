#include <iostream>
using namespace std;

int main() {
	float celsius=0.0,fr=0.0;
	cout<<"enter temperature in celsius:\n";
	cin>>celsius;
	fr=(1.8*celsius)+32;
	cout<<"temperature in fahrenheit is:"<<fr<<endl;
	
	return 0;
}
