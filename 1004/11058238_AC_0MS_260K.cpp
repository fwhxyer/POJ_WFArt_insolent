#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double n,a=0;
	for (int i=0;i<12;i++){
		cin>>n;
		a+=n;
	}
	cout.setf(ios::fixed);
	cout<<setprecision(2);
	cout<<"$"<<a/12.0<<endl;
	return 0;
}