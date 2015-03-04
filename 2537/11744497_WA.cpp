#include <iostream>
#include <math.h>

using namespace std;

const long long maxINF=100000000000;
double f[100][11];
long long g[100][11];

int main()
{
	int k,n;
	while (scanf("%d%d",&k,&n)!=EOF){
		memset(f,0,sizeof(f));
		memset(g,0,sizeof(g));
		for (int i=1;i<=k;i++)
			f[1][i]=1;
		for (int i=2;i<=n;i++)
			for (int j=1;j<=k;j++){
				f[i][j]=f[i-1][j-1]+f[i-1][j]+f[i-1][j+1];
				g[i][j]=f[i-1][j];
				if (f[i][j]>=maxINF)
				{	f[i][j]/=10;
					g[i][j]++;
				}
			}
		double ans=0,ans1=1;
		int maxt=0,anss=0;
		for (int i=1;i<=k;i++)
			if (maxt<g[n][i]) maxt=g[n][i];
		for (int i=1;i<=k;i++){
			while (g[n][i]<maxt) {f[n][i]/=10;g[n][i]++;}
			ans+=f[n][i];
		}
		for (int i=1;i<=n;i++){
			ans1*=k;
			if (ans1>=maxINF) {ans/=10;anss++;}
		}
		ans=ans/ans1/pow(10.0,anss-maxt)*100;
		printf("%0.5lf\n",ans);
	}
	return 0;
}