#include<iostream>
#include<math.h>
#include <cstdlib>
#include <string.h>

using namespace std;

int a[50][50];
int x[2550],y[2550];
int p[50];
int main()
{
	int T,h,l;
	cin>>T;
	while (T--)
	{
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(a,0,sizeof(a));
		memset(p,0,sizeof(p));
		int n=0,ans=0;
		cin>>h>>l;
		for (int i=0;i<h;i++)
			for (int j=0;j<l;j++){
				cin>>a[i][j];
				if (a[i][j]>n) n=a[i][j];
				x[a[i][j]]=i;
				y[a[i][j]]=j;
			}
		for (int i=1;i<=n;i++)
		{
			int xx=x[i];
			int yy=abs(y[i]-p[x[i]]);
			if (l-yy<yy) yy=l-yy;
			p[x[i]]=y[i];
			ans+=xx*20+yy*5;
		}
		cout<<ans<<endl;
	}
}