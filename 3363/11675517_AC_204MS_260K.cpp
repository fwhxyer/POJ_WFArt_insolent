#include<iostream>
using namespace std;

char mp[105][105];

int n,m,r,c;

int main()
{
	while (cin>>n>>m>>r>>c)
	{
		if (n==0&&m==0&&r==0&&c==0) break;
		int ans=0;
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++)
				cin>>mp[i][j];
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++)
				if (mp[i][j]=='1'){
					if (i+r>n||j+c>m) {
						ans=-1;
					}else
						if(ans!=-1) ans++; else break;
						for (int x=i;x<i+r;x++)
							for (int y=j;y<j+c;y++)
							{
								if (mp[x][y]=='1') mp[x][y]='0';
								else mp[x][y]='1';
							}
				}
			if (ans==-1)break;
		}
		cout<<ans<<endl;
	}
	return 0;
}