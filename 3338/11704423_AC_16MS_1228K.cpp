#include <iostream>
#include <string.h>
using namespace std;

int mp[22][22];
bool b[1000001];
int tmp=1,tmp1=1;
int x,y,T,x1,x2,y11,y2;
int way[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

bool go(int xx,int yy,int t)
{
	if (xx>=0&&xx<x&&yy>=0&&yy<y)
	{
		if (mp[xx][yy]<tmp1){
			int tttt=mp[xx][yy];
			mp[xx][yy]=t;
			for (int i=0;i<4;i++)
			{
				if (tttt==mp[xx+way[i][0]][yy+way[i][1]])
					go(xx+way[i][0],yy+way[i][1],t);
			}
		}
		else return 0;
	}
	else return 0;
	return 1;
}

int main()
{
	while (cin>>x>>y&&!(x==0&&y==0)){
		memset(mp,0,sizeof(mp));
		cin>>T;
		tmp=1;
		while (T--){
			tmp1=tmp;
			cin>>y11>>x1>>y2>>x2;
			if (x1>x2) x1^=x2^=x1^=x2;
			if (y11>y2) y11^=y2^=y11^=y2;
			int mint=1000000,ttt=0;
			for (int i=x1;i<x2;i++)
				for (int j=y11;j<y2;j++)
					if (mp[i][j]<mint) mint=mp[i][j]; 
			for (int i=x1;i<x2;i++)
				for (int j=y11;j<y2;j++){
					mp[i][j]=tmp1-mint+mp[i][j];
					if (mp[i][j]>ttt)ttt=mp[i][j];
				}
			tmp=ttt+1;
			for (int i=x1;i<x2;i++){
				if (go(i,y11-1,tmp)) tmp++;
				if (go(i,y11,tmp)) tmp++;
				if (go(i,y2-1,tmp)) tmp++;
				if (go(i,y2,tmp)) tmp++;
			}
			for (int i=y11;i<y2;i++){
				if (go(x1-1,i,tmp)) tmp++;
				if (go(x1,i,tmp)) tmp++;
				if (go(x2-1,i,tmp)) tmp++;
				if (go(x2,i,tmp)) tmp++;
			}
		}
		memset(b,0,sizeof(b));
		for (int i=0;i<x;i++)
			for (int j=0;j<y;j++)
				b[mp[i][j]]=1;
		int ans=0;
		for (int i=0;i<tmp;i++)
			if (b[i]) ans++;
		cout<<ans<<endl;
	}
	return 0;
}