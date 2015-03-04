#include <iostream>
#include <string.h>
using namespace std;

bool dig[10];

int main()
{
	int n,a,b,ansa,ansb;
	cin>>n;
	while(n--)
	{
		ansa=ansb=0;
		memset(dig,0,sizeof(dig));
		cin>>a>>b;
		if (a%10==b%10) ansa++;
		if (a/10%10==b/10%10) ansa++;
		if (a/100%10==b/100%10) ansa++;
		if (a/1000==b/1000) ansa++;
		dig[a%10]=dig[a/10%10]=dig[a/100%10]=dig[a/1000]=1;
		if (dig[b%10]) ansb++;
		if (dig[b/10%10]) ansb++;
		if (dig[b/100%10]) ansb++;
		if (dig[b/1000]) ansb++;
		ansb-=ansa;
		cout<<ansa<<"A"<<ansb<<"B"<<endl;
	}
	return 0;
}