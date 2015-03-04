#include <iostream>
using namespace std;

int main ()
{
	double n;
	cin>>n;
	while (n){
		double tmp=0;
		int i;
		for (i=1;tmp<=n;i++)
			tmp+=1.0/(i+1);
		cout<<i-1<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}