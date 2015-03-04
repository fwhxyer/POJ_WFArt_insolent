#include <iostream>
#include <stdio.h>
#include <string>
 
using namespace std;

char mp[101][101];
int ans[101][101];
int maxans=0;

int findl(int x,int y)
{
	if (mp[x][y]==1) return y;
	int ty=y;
	while (mp[x][ty]==mp[x][ty-1]) ty--;
	while (mp[x][y]&&y-ty>=mp[x][y]) ty+=mp[x][y];
	return ty;
}
int findr(int x,int y)
{
	if (mp[x][y]==1) return y;
	int ty=y;
	while (mp[x][ty]==mp[x][ty+1]) ty++;
	while (mp[x][y]&&ty-y>=mp[x][y]) ty-=mp[x][y];
	return ty;
}
int findll(int x,int y)
{
	int ty=findl(x,y);
	while (ty&&mp[x][ty-1]==0) ty--;
	return ty;
}
int findrr(int x,int y)
{
	int ty=findr(x,y);
	while (ty&&mp[x][ty+1]==0) ty++;
	return ty;
}

int fall(int x,int l,int r)
{
	if (l>r) return 0;
	int ans=0,i=0,ll=0;
	if (findl(x,l)>=l&&findr(x,l)<=r)
	{	
		ans+=mp[x][l];
		ll=findll(x,l);
	}else 
		ll=findr(x,l)+1;
	for (i=findr(x,l)+1;findr(x,i)<=r;i=findr(x,i)+1){
		ans+=mp[x][i];
	}
	ans+=fall(x-1,ll,findrr(x,findl(x,i)-1));
	return ans;
}

int main()
{
	int n,m;
	while (cin>>m>>n&&(!(m==0&&n==0)))
	{
		memset(ans,0,sizeof(ans));
		memset(mp,101,sizeof(mp));
		maxans=0;
		for (int i=0;i<m;i++)
			for (int j=0;j<n;j++)
			{
				cin>>mp[i][j];
				mp[i][j]-='0';
			}
		for (int j=0;j<n;j++)
			ans[0][j]=mp[0][j];
		for (int i=1;i<m;i++)
			for (int j=0;j<n;j++)
			{
				ans[i][j]=mp[i][j]+fall(i-1,findll(i,j),findrr(i,j));
				if (ans[i][j]>maxans) maxans=ans[i][j];
			}
		printf("%d\n",maxans);
	}
	return 0;
}