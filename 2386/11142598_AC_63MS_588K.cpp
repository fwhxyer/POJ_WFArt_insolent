#include<iostream>
using namespace std;
int map[102][102];
int w[8][2]={{0,-1},{-1,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0}};

void go(int a,int b,int ans)
{
	map[a][b]=ans;
	int tmpa,tmpb;
	for (int i=0;i<8;i++)
	{
		tmpa=a+w[i][0];
		tmpb=b+w[i][1];
		if (map[tmpa][tmpb]==1) go(tmpa,tmpb,ans);
	}
}

int main()
{
	int n,m;
	cin>>m>>n;
	char tmp;
	for (int i=0;i<=m+1;i++) map[i][0]=map[i][n+1]=0;
	for (int j=0;j<=n+1;j++) map[0][j]=map[m][j]=0;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
		{
			cin>>tmp;
			if (tmp=='W') map[i][j]=1;
			else map[i][j]=0;
		}
	int ans=1;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
		{
			if (map[i][j]==1) go(i,j,++ans);
		}
	cout<<ans-1<<endl;
	system("pause");
}