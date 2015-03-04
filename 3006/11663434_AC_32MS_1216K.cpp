#include<iostream>
#include<string>
using namespace std;

bool prime[1000005];

int main()
{
	int a,b,c;
	for (int i=2;i<1000001;i++)
		prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2;i<1001;i++)
	{
		if (prime[i])
			for(int j=i*2;j<1000001;j+=i)
				prime[j]=0;
	}
	while(cin>>a>>b>>c&&((a!=0)&&(b!=0)&&(c!=0)))
	{
		int tmp=a;
		if (prime[tmp]) c--;
		while (c&&((tmp+=b)<=1000000))
		{
			if (prime[tmp]) c--;
		}
		cout<<tmp<<endl;
	}
	return 0;
}