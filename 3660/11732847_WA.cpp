#include <iostream>
using namespace std;

int mp[101][101]={0};

int main()
{
	int n,m,a,b;
	cin>>n>>m;
	for (int i=1;i<=n;i++) mp[i][i]=1;
	for (int i=0;i<m;i++){
		cin>>a>>b;
		mp[a][b]=1;
		mp[b][a]=2;
	}
	for (int i=1;i<=n;i++)
	for (int j=1;j<=n;j++)
	for (int k=1;k<=n;k++)
	{
		if (mp[i][j]==1||(mp[i][k]==1&&mp[k][j]==1)||(mp[k][i]==2&&mp[k][j]==1)||(mp[i][k]==1&&mp[j][k]==2)||(mp[k][i]==2&&mp[j][k]==2))
			mp[i][j]=1;
		else if (mp[i][j]==2||(mp[i][k]==2&&mp[k][j]==2)||(mp[k][i]==1&&mp[k][j]==2)||(mp[i][k]==2&&mp[j][k]==1)||(mp[k][i]==1&&mp[j][k]==1))
			mp[i][j]=2;
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		int j=0;
		for (j=1;j<=n;j++)
			if (mp[i][j]==0) break;
		if (j>n)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
	