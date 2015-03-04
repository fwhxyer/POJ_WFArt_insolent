#include<iostream>

using namespace std;

int a[10][10];
bool b[1000000]={0};
int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void go(int x,int y,int t,int ans)
{
	if (t==0) {b[ans]=1;return;}
	for (int i=0;i<4;i++)
	{
		int xt=x+way[i][0];
		int yt=y+way[i][1];
		if (x<1||x>5||y<1||y>5) break;
		go(xt,yt,t-1,ans*10+a[x][y]);
	}
}

int main()
{
	for (int i=1;i<=5;i++)
	for (int j=1;j<=5;j++)
		cin>>a[i][j];
	for (int i=1;i<=5;i++)
	for (int j=1;j<=5;j++)
		go(i,j,6,0);
	int ans=0;
	for (int i=0;i<1000000;i++)
		if (b[i]) ans++;
	cout<<ans<<endl;
	//system("pause");
	return 0;
}