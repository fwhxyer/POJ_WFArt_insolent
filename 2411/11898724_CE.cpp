#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

long long dp[12][4096];
long long pow2[100]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192};
bool vis[30000];
long long T,TT=1,a1=0,b1=0,a2=0,b2=0;
long long x,y;

void dfs(long long p,long long s,long long val){
	vis[s]=1;
	dp[p][s]+=val;
	for (long long i=0;i<y-1;i++){
		if (!(s&pow2[i])&&!(s&pow2[i+1])) {
			s+=pow2[i]+pow2[i+1];
			if (!vis[s]) dfs(p,s,val);
			s-=pow2[i]+pow2[i+1];
		}
	}
}

void change(long long p,long long s){
	long long tmp=0;
	for (long long i=0;i<y;i++){
		if (!(s&pow2[i])) tmp+=pow2[i];
	}
	memset(vis,0,sizeof(vis));
	dfs(p+1,tmp,dp[p][s]);
}

int main()
{
	while (cin>>x>>y&&!(x==0&&y==0)){
		memset(dp,0,sizeof(dp));
		
		dp[0][int(pow(2.0,y))-1]=1;
		for (long long i=0;i<x;i++) {
			for (long long j=0;j<pow(2.0,y);j++)
				if (dp[i][j]) change(i,j);
			/*for (long long j=0;j<256;j++)
				if (dp[i+1][j]) //cout<<i+1<<","<<j<<":"<<dp[i+1][j]<<endl;
					printf("%d,%d : %d\n",i+1,j,dp[i+1][j]);
			cout<<endl;*/
		}
		//cout<<"Scenario #"<<TT++<<":"<<endl;
		cout<<dp[x][int(pow(2.0,y))-1]<<endl;
	}
	return 0;
}
