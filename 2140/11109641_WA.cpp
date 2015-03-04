#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	for (int a=1;a<=n;a++)
	{
		double tmp=1-4*(-a*a+a-2*n);
		if (tmp<0) continue;
		int b=(-1+sqrt(tmp))/2;
		if (b*b-a*a+a+b-2*n==0) ans++;
	}
	cout<<ans<<endl;
}