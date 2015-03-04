#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int f[50001];
int e[50001];

int find(int a)
{
	if (f[a]==a) 
		return a;
	else{
		int tmp=f[a];
		f[a]=find(f[a]);
		e[a]=(e[a]+e[tmp])%3;
		return f[a];
	}
}

int main()
{
	int n,k,ans=0;
	cin>>n>>k;
	for (int i=0;i<=n;i++) {f[i]=i;e[i]=0;}
	for (int i=0;i<k;i++)
	{
		int d,x,y;
		scanf("%d %d %d",&d,&x,&y);
		if (x>n||y>n ||(d==2&&x==y)){
			ans++;
			continue;
		}
		int a=find(x);
		int b=find(y);
		if (a==b){
			if (d==1&&e[x]!=e[y]) ans++;
			if (d==2&&!((e[x]+2)%3==e[y])) ans++;
		}else{
			f[b]=x;
			if (d==1) {
				if (e[y]==1) e[b]=2;
				if (e[y]==2) e[b]=1;
				if (e[y]==0) e[b]=0;
			}
			if (d==2) {
				if (e[y]==1) e[b]=1;
				if (e[y]==2) e[b]=0;
				if (e[y]==0) e[b]=2;
			}
		}
	}
	cout<<ans<<endl;
	system("pause");
}