#include <iostream>
#include <math.h>
using namespace std;

long long C(int n,int m)
{
	double ans=1;
	if (n>m) return -1;
	if (n>m-n) n=m-n;
	for (int i=1;i<=n;i++)
		ans*=(double)(m+1-i)/(n+1-i);
	return floor(ans+0.5);
}
int main()
{
	int T,TT,n,k;
	cin>>T;
	while(T--)
	{
		cin>>TT>>n>>k;
		long long ans=0;
		for (int i=0;i+1<=n-k-i;i++)
			ans+=C(i+1,n-k-i)*C(i,k+i);
		cout<<TT<<" "<<ans<<endl;
	}
	return 0;
}