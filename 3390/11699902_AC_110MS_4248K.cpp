#include<iostream>
#include<string.h>

using namespace std;

int a[10011]={0};
int f[10011][101]={0};

int min(int a,int b){return a>b?b:a;}
int main()
{
	int T,m,n;
	cin>>T;
	while (T--)
	{
		cin>>m>>n;
		for (int i=1;i<=n;i++)
			for (int j=0;j<=m;j++)
				f[i][j]=1050000000;
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		f[1][a[1]]=(m-a[1])*(m-a[1]);
		for (int i=2;i<=n;i++){
			for (int j=1;j<=m;j++)
				f[i][a[i]]=min(f[i-1][j]+(m-a[i])*(m-a[i]),f[i][a[i]]);
			for (int j=a[i]+2;j<=m;j++)	
 				f[i][j]=min(f[i][j],f[i-1][j-a[i]-1]+(m-j)*(m-j)-(m-j+a[i]+1)*(m-j+a[i]+1));
		}
		int ans=1050000000;
		for (int i=1;i<=m;i++)
			if (ans>f[n][i]) ans=f[n][i];
		cout<<ans<<endl;
	}
	return 0;
}
