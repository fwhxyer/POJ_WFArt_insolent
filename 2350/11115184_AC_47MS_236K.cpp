#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n,a[1001],ans=0;
		double s=0;
		cin>>n;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		s/=n;
		for (int i=0;i<n;i++)
		{
			if (a[i]>s) ans++;
		}
		double anst=ans*100.0/n;
		printf("%0.3f%%\n",anst);
	}
}