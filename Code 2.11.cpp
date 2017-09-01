#include <iostream>

using namespace std;

int main() {
	int s1,s2,s3,s4,s5,tot;
	float avg,per;
	cout<<"enter marks of 5 subjects\n";
	cin>>s1>>s2>>s3>>s4>>s5;
	tot=s1+s2+s3+s4+s5;
	avg=tot/5;
	per=(tot*100)/500;
	cout<<"total is "<<tot<<"\naverage is "<<avg<<"\npercentage is "<<per;
            
	return 0;
}
