#include <iostream>
using namespace std;

int mp[21][21][21]={0};

int min(int a,int b){return a>b?b:a;}
int max(int a,int b){return a>b?a:b;}

int f(int w,int h,int m)
{
	if (mp[w][h][m]) return mp[w][h][m];
	int ans=400;
	for (int i=w-1;i>0;i--)
		for (int j=1;j<m;j++)
			ans=min(ans,max(f(i,h,m-j),f(w-i,h,j)));
	for (int i=h-1;i>0;i--)
		for (int j=1;j<m;j++)
			ans=min(ans,max(f(w,i,m-j),f(w,h-i,j)));
	mp[w][h][m]=ans;
	return ans;
}

int main()
{
	int w,h,m;
	for (int i=1;i<=20;i++)
	for (int j=1;j<=20;j++){
		mp[i][j][1]=i*j;
		mp[j][i][1]=i*j;
	}
	while (cin>>w>>h>>m){
		if (!w&&!h&&!m) break;
		cout<<f(w,h,m)<<endl;
	}
	return 0;
}