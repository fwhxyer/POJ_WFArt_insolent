#include<iostream>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

int mp[11][11];
bool b[11];
pair<int,int> astar[11][11];
long long n,ans,ansf;

void re(int p,int t)
{
	if (t>=n&&p==0){
		if (ansf>ans) ansf=ans;
		return;
	}
	if (ans>ansf) return;
	for (int j=1;j<=n;j++)
	{
		int i=astar[p][j].second;
		if (!mp[p][i]) continue;
		bool flag=0;
		if (!b[i]) {b[i]=true;t++;flag=1;}
		ans+=mp[p][i];
		re(i,t);                                                                                                                                                         
		if (flag) {b[i]=false;t--;}
		ans-=mp[p][i];
	}
}

int main()
{
	while (cin>>n&&n)
	{
		memset(b,0,sizeof(b));
		b[0]=1;
		ans=0;
		for (int i=0;i<=n;i++)
			for (int j=0;j<=n;j++){
				cin>>mp[i][j];
				astar[i][j]=make_pair(mp[i][j],j);
				ansf+=mp[i][j];
			}
		for (int i=0;i<=n;i++)
			sort(astar[i],astar[i]+n+1);
		re(0,0);
		cout<<ansf<<endl;
	}
}