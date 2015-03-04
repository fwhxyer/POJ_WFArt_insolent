#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b;
	const double p=(1+sqrt(5.0))/2.0;
	while (cin>>a>>b)
	{
		if (a<b){
			a=a^b;
			b=a^b;
			a=a^b;
		}
		int c=a-b;
		int d=int(c*p);
		if (b==d) cout<<0<<endl;
		else cout<<1<<endl;
	}
}