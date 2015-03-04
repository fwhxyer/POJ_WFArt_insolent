#include<iostream>
using namespace std;

int mp[20][20];
int n,m;

void go(int t,int x,int y)
{
	mp[x][y]=t;
	if (x>=n-1&&y>=n-1) return;
	if (t==9) t=0;
	if (x>=y)
		go(t+1,0,y+1);
	else 
		go(t+1,x+1,y);
}

int main()
{
	cin>>n>>m;
	go(m,0,0);
	for (int i=0;i<n;i++){
		for (int j=0;j<n-1;j++)
		{
			if (mp[i][j]) cout<<mp[i][j]<<" ";
			else cout<<"  ";
		}
		cout<<mp[i][n-1]<<endl;
	}
	return 0;
}
