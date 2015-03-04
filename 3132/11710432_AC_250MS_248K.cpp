#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool pri[1122]={0};
int prim[1000];
int m=0;
int f[1122][15];

int ff(int a,int b)
{
	memset(f,0,sizeof(f));
	f[0][0]=1;
	for (int k=0;k<m;k++) 
		for (int i=a;i>0;i--)
			for (int j=b;j>0;j--) if (i-prim[k]>=0)
					f[i][j]+=f[i-prim[k]][j-1];
	return f[a][b];
}

int main()
{
	int a,b;
	pri[0]=pri[1]=1;
	for (int i=2;i<=sqrt(1122.0);i++)
	{
		if (!pri[i])
		{
			for (int j=2;j<=1121/i;j++)
				pri[i*j]=1;
		}
	}
	for (int i=2;i<1122;i++)
		if (!pri[i]) prim[m++]=i;
	while (scanf("%d%d",&a,&b)==2&&!(a==0&&b==0))
	{
		printf("%d\n",ff(a,b));
	}
}