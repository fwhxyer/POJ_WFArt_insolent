#include<iostream>
using namespace std;

int f[50001];
int e[50001];

int find(int a)
{
	if (f[a]==a) 
		return a;
	else
		return find(f[a]);
}

int main()
{
	int n,k,ans=0;
	cin>>n>>k;
	for (int i=0;i<=n;i++) {f[i]=i;e[i]=0;}
	for (int i=0;i<k;i++)
	{
		int d,x,y;
		cin>>d>>x>>y;
		if (x>n||y>n ||(d==2&&x==y)){
			ans++;
			continue;
		}
		if (find(x)==find(y)){
			if (d==1&&e[x]!=e[y]) ans++;
			if (d==2&&!((e[x]+2)%3==e[y])) ans++;
		}else{
			f[find(y)]=find(x);
			if (d==1) e[y]=e[x];
			if (d==2) e[y]=(e[x]+2)%3;
		}
	}
	cout<<ans<<endl;
	system("pause");
}