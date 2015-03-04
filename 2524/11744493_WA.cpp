#include <iostream>

using namespace std;

int ufs[50001];
bool flag[50001];

int find(int a)
{
	if (a!=ufs[a])
	{
		ufs[a]=find(ufs[a]);
		return ufs[a];
	}else 
		return a;
}

int main()
{
	int n,m;
	while (scanf("%d%d",&n,&m)!=EOF&&!(!n&&!m))
	{
		for (int i=0;i<=n;i++)
			ufs[i]=i;
		int a,b;
		for (int i=0;i<m;i++)
		{
			scanf("%d%d",&a,&b);
			ufs[find(b)]=ufs[find(a)];
		}
		memset(flag,0,sizeof(flag));
		for (int i=1;i<=n;i++)
			flag[find(i)]=1;
		int ans=0;
		for (int i=1;i<=n;i++)
			if (flag[i]) ans++;
		printf("%d\n",ans);
	}
}