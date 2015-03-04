#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int x[11],y[11];
int T,xx,yy,n,ans,ansf;
bool b[11];

int ll(int a,int b){
	return abs(x[a]-x[b])+abs(y[a]-y[b]);
}

void go(int p,int t)
{
	if (t>=n||ans+ll(p,0)>ansf) {
		if (ans+ll(p,0)<ansf) ansf=ans+ll(p,0);
		return;
	}
	for (int i=1;i<=n;i++)
	{
		if (!b[i]) {
			ans+=ll(p,i);
			b[i]=1;
			go(i,t+1);
			ans-=ll(p,i);
			b[i]=0;
		}
	}
}

int main()
{
	cin>>T;
	while (T--){
		memset(b,0,sizeof(b));
		b[0]=1;
		ans=0;
		ansf=10000000;
		cin>>xx>>yy;
		cin>>x[0]>>y[0];
		cin>>n;
		for (int i=1;i<=n;i++)
			cin>>x[i]>>y[i];
		go(0,0);
		printf("The shortest path has length %d\n",ansf);
	}
}
