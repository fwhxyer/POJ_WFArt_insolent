#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int T,TT;
	long long n,tmp;
	cin>>T;
	while(T--)
	{
		cin>>TT;
		cin>>n;
		int ans=0;
		for (int i=2;i<=sqrt(double(n*2));i++)
		{
			tmp=n/i-i/2;
			if (i%2==0) tmp++;
			if ((tmp+tmp+i-1)*i/2==n) ans++;
		}
		cout<<TT<<" "<<ans<<endl;
	}
	return 0;
}