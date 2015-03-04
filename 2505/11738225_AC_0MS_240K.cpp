#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n;
	while (cin>>n){
		if (n==1) {cout<<"Stan wins.\n";continue;}
		bool flag=0;
		while (n>1)
			if (flag) {
				n=ceil(n/2.0);
				flag=0;
			}else {
				n=ceil(n/9.0);
				flag=1;
			}
		if (flag) cout<<"Stan"; else cout<<"Ollie";
		cout<<" wins.\n";
	}
	return 0;
}