#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

long long lg[11]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};

long long w(long long a){
	if (a<0) return 0;
	long long aa=a,t=0,ans=0;
	while (aa){aa/=10;t++;}
	t--;
	for (int i=0;i<t;i++)
	{
		ans+=(a/lg[i+1])*lg[i];
		if (i&&!(a/lg[i]%10)) ans-=(lg[i]-a%lg[i]-1);
	}
	return ans+1;
}

int main()
{
	long long n,m;
	while (cin>>m>>n&&m>=0)
	{
		cout<<w(n)-w(m-1)<<endl;
	}
	return 0;
}
