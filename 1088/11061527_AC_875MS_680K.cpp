#include<iostream>
using namespace std;

int ans=0;
int map[102][102],f[102][102];
int way[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

void find(int x,int y,int len)
{
	if (len>f[x][y]) f[x][y]=len;
		else return;
	int tmpx,tmpy;
	for (int i=0;i<4;i++){
		tmpx=x+way[i][0];
		tmpy=y+way[i][1];
		if (map[tmpx][tmpy]<map[x][y]) find(tmpx,tmpy,len+1);
	}
}

int main()
{
	int x,y;
	cin>>y>>x;
	for (int i=0;i<=x+1;i++) {map[i][0]=10001;map[i][y+1]=10001;}
	for (int i=0;i<=y+1;i++) {map[0][i]=10001;map[x+1][i]=10001;}
	for (int j=1;j<=y;j++)
		for (int i=1;i<=x;i++)
		{
			cin>>map[i][j];
		}
	for (int j=1;j<=y;j++)
		for (int i=1;i<=x;i++)
		{
			find(i,j,1);
		}
	for (int j=1;j<=y;j++)
		for (int i=1;i<=x;i++)
		{
			if (f[i][j]>ans) ans=f[i][j];
		}
	cout<<ans<<endl;
	system("pause");
}