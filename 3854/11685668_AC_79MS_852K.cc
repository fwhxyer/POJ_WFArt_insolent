#include<iostream>
#include<string.h>
#include<map>

using namespace std;

pair<int,int> mp[101][101];
int ans[101][101];
int a,b,ansM;

int fall(int row,int x,int y)
{
	if (!row) return 0;
	while (mp[row][x].second!=0&&mp[row][x].second<x)
		x++;
	while (mp[row][y].second!=0&&mp[row][y].second+mp[row][y].first-1>y)
		y--;
	while (mp[row][x-1].first==0)
		x--;
	while (mp[row][y+1].first==0)
		y++;
	if (x>y) return 0;
	int ans=fall(row-1,x,y);
	for (int i=x;i<=y;i++)
	{
		if (mp[row][i].first)
			ans++;
	}
	return ans;
}

int main()
{
	while (cin>>a>>b&&(!(a==0&&b==0)))
	{
		ansM=0;
		memset(ans,0,sizeof(ans));
		for (int i=0;i<=a+1;i++)
			for (int j=0;j<=b+1;j++)
			{
				mp[i][j]=make_pair(-1,-1);
			}
		int tmp,tmp1=0,tmp2=0;
		for (int i=1;i<=a;i++)
			for (int j=1;j<=b;j++)
			{
				char tmpC;
				cin>>tmpC;
				tmp=int(tmpC-'0');
				if (!tmp)
				{
					mp[i][j]=make_pair(0,0);
				}else if (!tmp1) 
				{
					tmp1=tmp-1;
					mp[i][j]=make_pair(tmp,j);
				}else
				{
					tmp1--;
					mp[i][j]=make_pair(tmp,mp[i][j-1].second);
				}
			}
		for (int i=1;i<=a;i++)
			for (int j=1;j<=b;j++)
			{
				ans[i][j]=fall(i,mp[i][j].second,mp[i][j].second+mp[i][j].first-1);
				if (ans[i][j]>ansM) ansM=ans[i][j];
			}
		cout<<ansM<<endl;
	}
	return 0;
}