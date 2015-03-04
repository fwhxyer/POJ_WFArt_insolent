#include<iostream>
using namespace std;

int main()
{
	int a[6];
	while (1)
	{
		int b=0,mint=2100000000,maxt=0;
		double ans=0;
		for (int i=0;i<6;i++) {
			cin>>a[i];
			if (!a[i]) b++;
			if (a[i]>maxt) maxt=a[i];
			if (a[i]<mint) mint=a[i];
			ans+=a[i];
		}
		ans-=mint;
		ans-=maxt;
		if (b>=6) break;
		cout<<ans/4.0<<endl;
	}
	return 0;
}