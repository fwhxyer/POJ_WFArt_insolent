#include<iostream>
#include<queue>
#include<map>
#include<string.h>
using namespace std;

queue<pair<int,int> > q;
bool pri[10002];
bool use[10001];
int way[4]={1000,100,10,1};

int go(int a,int b)
{
	if (a==b) return 0;
	int ans=0;
	memset(use,0,sizeof(use));
	while (!q.empty()) q.pop();
	q.push(make_pair(a,0));
	use[a]=1;
	int tmp;
	while (!q.empty()){
		tmp=q.front().first;
		ans=q.front().second;
		q.pop();
		for (int i=0;i<4;i++)
			for (int j=0;j<10;j++){
				if (!i&&!j) continue;
				int tmp1=tmp+(j-tmp/way[i]%10)*way[i];
				if (tmp1==b) return ans+1;
				if (pri[tmp1]&&!use[tmp1]){
					use[tmp1]=1;
					q.push(make_pair(tmp1,ans+1));
				}
			}
	}
	return -1;
}

int main()
{
	for (int i=2;i<10001;i++) pri[i]=1;
	pri[0]=pri[1]=0;
	for (int i=2;i<=100;i++)
	{
		if (pri[i])
			for (int j=2;j<=10001/i;j++)
				pri[i*j]=0;
	}
	int T,a,b;
	cin>>T;
	while (T--)
	{
		cin>>a>>b;
		if (!pri[a]||!pri[b]||a/1000==0) {cout<<"Impossible"<<endl;continue;}
		int ans=go(a,b);
		if (ans!=-1) cout<<ans<<endl;
		else cout<<"Impossible"<<endl;
	}
	return 0;
}
