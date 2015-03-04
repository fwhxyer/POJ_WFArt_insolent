#include<iostream>

using namespace std;

int mp[105][105];

int way[8][2]={{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};

void go (int x,int y,int tmp)
{
	mp[x][y]=tmp;
	for (int i=0;i<8;i++){
		int xt=x+way[i][0];
		int yt=y+way[i][1];
		if (mp[xt][yt]==1)
			go(xt,yt,tmp);
	}
}

int main()
{
	int x,y;
	while (cin>>y>>x)
	{
		if (x==0&&y==0) break;
		for (int i=0;i<=x+1;i++)
		{
			mp[i][y+1]=0;
			mp[i][0]=0;
		}
		for (int i=0;i<=y+1;i++)
		{
			mp[x+1][i]=0;
			mp[0][i]=0;
		}
		for (int i=1;i<=y;i++)
			for (int j=1;j<=x;j++)
			{
				char tmp;
				cin>>tmp;
				if (tmp=='@') mp[j][i]=1;
				else mp[j][i]=0;
			}
		int ans=1;
		for (int i=1;i<=y;i++)
			for (int j=1;j<=x;j++)
				if (mp[j][i]==1) go(j,i,++ans);
		cout<<ans-1<<endl;
	}
	return 0;
}