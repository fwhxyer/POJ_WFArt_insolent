#include<iostream>
using namespace std;

int map[22][22];
int way[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

void go(int a,int b)
{
	for (int i=0;i<4;i++){
		int tmpa=a+way[i][0];
		int tmpb=b+way[i][1];
		if (map[tmpa][tmpb]==0)
		{
			map[tmpa][tmpb]=2;
			go(tmpa,tmpb);
		}
	}
}
int main()
{
	int x,y,beginX,beginY;
	char tmp;
	cin>>x>>y;
	while(x!=0||y!=0){
		for (int i=0;i<y+1;i++){
			map[0][i]=1;
			map[x+1][i]=1;
		}
		for (int i=0;i<x+1;i++){
			map[i][0]=1;
			map[i][y+1]=1;
		}
		for (int j=1;j<=y;j++)
			for (int i=1;i<=x;i++){
				cin>>tmp;
				if(tmp=='#') map[i][j]=1;
				else map[i][j]=0;
				if(tmp=='@'){
					beginX=i;
					beginY=j;
					map[i][j]=2;
				}
			}
		go(beginX,beginY);
		int ans=0;
		for (int j=0;j<=y;j++)
			for (int i=0;i<=x;i++)
				if (map[i][j]==2) ans++;
		cout<<ans<<endl;
		cin>>x>>y;
	}
}