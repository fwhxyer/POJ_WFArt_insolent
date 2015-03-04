#include <iostream>
#include <string.h>
using namespace std;

int dp[9][256];
int pow2[100]={1,2,4,8,16,32,64,128,256,512};
bool vis[2560];
int T,TT=1,a1=0,b1=0,a2=0,b2=0;

void dfs(int p,int s,int val){
	vis[s]=1;
	if (!(p+1==a1&&!(s&(pow2[b1-1]))))
	if (!(p+1==a2&&!(s&(pow2[b2-1]))))
	dp[p][s]+=val;
	for (int i=0;i<7;i++){
		if (!(s&pow2[i])&&!(s&pow2[i+1])) {
			s+=pow2[i]+pow2[i+1];
			if (!vis[s]) dfs(p,s,val);
			s-=pow2[i]+pow2[i+1];
		}
	}
}

void change(int p,int s){
	int tmp=0;
	if (p+1==a1) tmp+=pow2[b1-1];
	if (p+1==a2) tmp+=pow2[b2-1];
	for (int i=0;i<8;i++){
		if (!(s&pow2[i])) tmp+=pow2[i];
	}
	memset(vis,0,sizeof(vis));
	dfs(p+1,tmp,dp[p][s]);
}

int main()
{
	cin>>T;
	while (T--)
	{
		cin>>a1>>b1;
		cin>>a2>>b2;
		memset(dp,0,sizeof(dp));
		dp[0][255]=1;
		for (int i=0;i<8;i++) {
			for (int j=0;j<256;j++)
				if (dp[i][j]) change(i,j);
			/*for (int j=0;j<256;j++)
				if (dp[i+1][j]) //cout<<i+1<<","<<j<<":"<<dp[i+1][j]<<endl;
					printf("%d,%d : %d\n",i+1,j,dp[i+1][j]);
			cout<<endl;*/
		}
		cout<<"Scenario #"<<TT++<<":"<<endl;
		cout<<(dp[8][255]?1:0)<<endl<<endl;
	}
	return 0;
}