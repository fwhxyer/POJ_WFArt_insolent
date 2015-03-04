#include<iostream>
#include<string>
using namespace std;

long long f[46][2];

int main()
{
	int t=0,tmp=1;
	long long ans=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		memset(f,0,sizeof(f));
		f[0][0]=1;
		for (int i=1;i<=n;i++)
		{
			f[i][0]=f[i-1][0]+f[i-1][1];
			f[i][1]=f[i-1][0];
		}
		printf("Scenario #%d:\n%lld\n\n",tmp++,f[n][0]+f[n][1]);
	}
	system("pause");
}