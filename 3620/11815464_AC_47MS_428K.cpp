#include <iostream>

using namespace std;

int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int mp[102][102]={0};
int ans[10001]={0};

void dfs(int x,int y,int z)
{
	mp[x][y]=z;
	for (int i=0;i<4;i++){
		int xx=x+way[i][0];
		int yy=y+way[i][1];
		if (mp[xx][yy]==1)
			dfs(xx,yy,z);
	}
}

int main()
{
	int k,x,y,xx,yy,n=2;
	cin>>x>>y>>k;
	for (int i=0;i<k;i++){
		cin>>xx>>yy;
		mp[xx][yy]=1;
	}
	for (int i=1;i<=x;i++)
	for (int j=1;j<=y;j++)
	{
		if (mp[i][j]==1) dfs(i,j,n++);
	}
	for (int i=1;i<=x;i++)
	for (int j=1;j<=y;j++)
	{
		if (mp[i][j]) ans[mp[i][j]]++;
	}
	int maxx=0;
	for (int i=2;i<=10000;i++)
		if (maxx<ans[i]) maxx=ans[i];
	cout<<maxx<<endl;
	return 0;
}