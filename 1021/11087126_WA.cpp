#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int s=0,st=0,x00,y00;
double ax[6000],ay[6000],an[6000];
double ans[6000],anst[6000];
int w[101][101];
int h[101][101];

void findw(int x,int y,int s)
{
	if (x<0||x>x00||y<0||y>y00) return;
	w[x][y]=s;
	ax[s]+=x;
	ay[s]+=y;
	an[s]++;
	if (w[x+1][y]==1) findw(x+1,y,s);
	if (w[x-1][y]==1) findw(x-1,y,s);
	if (w[x][y+1]==1) findw(x,y+1,s);
	if (w[x][y-1]==1) findw(x,y-1,s);
}

void findh(int x,int y,int s)
{
	if (x<0||x>x00||y<0||y>y00) return;
	h[x][y]=s;
	ax[s]+=x;
	ay[s]+=y;
	an[s]++;
	if (h[x+1][y]==1) findh(x+1,y,s);
	if (h[x-1][y]==1) findh(x-1,y,s);
	if (h[x][y+1]==1) findh(x,y+1,s);
	if (h[x][y-1]==1) findh(x,y-1,s);
}

int main()
{
	int t=0;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		memset(w,0,sizeof(w));
		memset(h,0,sizeof(h));
		int x,y,n,a,b;
		cin>>x>>y>>n;
		x00=x;y00=y;
		for (int i=0;i<n;i++){
			cin>>a>>b;
			w[a][b]=1;
		}
		for (int i=0;i<n;i++){
			cin>>a>>b;
			h[a][b]=1;
		}
		s=2;
		memset(ax,0,sizeof(ax));
		memset(ay,0,sizeof(ay));
		memset(an,0,sizeof(an));
		memset(ans,0,sizeof(ans));
		for (int j=0;j<=y;j++)
			for (int i=0;i<=x;i++)
				if(w[i][j]==1) findw(i,j,s++);
		for (int i=2;i<s;i++){ax[i]/=an[i];ay[i]/=an[i];}
		for (int j=0;j<=y;j++)
			for (int i=0;i<=x;i++)
				if(w[i][j]) ans[w[i][j]]+=(i-ax[w[i][j]])*(i-ax[w[i][j]])+(j-ay[w[i][j]])*(j-ay[w[i][j]]);
		sort(ans+2,ans+s);
		st=s;
		s=2;
		memset(ax,0,sizeof(ax));
		memset(ay,0,sizeof(ay));
		memset(an,0,sizeof(an));
		memset(anst,0,sizeof(anst));
		for (int j=0;j<=y;j++)
			for (int i=0;i<=x;i++)
				if(h[i][j]==1) findh(i,j,s++);
		if (st!=s) {cout<<"NO\n";continue;}
		for (int i=2;i<s;i++){ax[i]/=an[i];ay[i]/=an[i];}
		for (int j=0;j<=y;j++)
			for (int i=0;i<=x;i++)
				if(h[i][j]) anst[h[i][j]]+=(i-ax[h[i][j]])*(i-ax[h[i][j]])+(j-ay[h[i][j]])*(j-ay[h[i][j]]);
		sort(anst+2,anst+s);
		bool flag=1;
		for (int i=2;i<s;i++)
			if (ans[i]!=anst[i]) {cout<<"NO\n";flag=0;}
		if (flag) cout<<"YES\n";
	}
	system("pause");
}