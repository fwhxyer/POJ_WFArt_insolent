#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<queue>
#include<functional>

using namespace std;

vector<int> e[1000001];
vector<int> e2[1000001];
priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
long long d[1000001];
int pi[1000001];

int main()
{
	int T;
	cin>>T;
	while (T-->0)
	{
		int nv,ne;
		scanf("%d%d",&nv,&ne);
		for (int i=0;i<=ne;i++)
		{
			e[i].clear();
			e2[i].clear();
		}
		for (int i=0;i<ne;i++)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			e[a].push_back(b);
			e[a].push_back(c);
			e2[b].push_back(a);
			e2[b].push_back(c);
		}
		for (int i=0;i<pq.size();i++)
			pq.pop();
		for (int i=0;i<=nv;i++){
			d[i]=1050000000;
			pi[i]=-1;
			pq.push(make_pair(1050000000,i));
		}
		d[1]=0;
		pq.push(make_pair(0,1));
		for (int i=0;i<nv;i++)
		{
			int n,m;
			m=pq.top().first;
			n=pq.top().second;
			pq.pop();
			if (d[n]!=m) continue;
			int v,vl;
			for (int i=0;i<e[n].size();i+=2)
			{
				v=e[n][i];
				vl=e[n][i+1];
				if (d[v]>d[n]+vl)
				{
					d[v]=d[n]+vl;
					pi[v]=n;
					pq.push(make_pair(d[n]+vl,v));
				}
			}
		}
		long long ans=0;
		for (int i=1;i<=nv;i++)
		{
			ans+=d[i];
		}
		for (int i=0;i<pq.size();i++)
			pq.pop();
		for (int i=0;i<=nv;i++){
			d[i]=1050000000;
			pi[i]=-1;
			pq.push(make_pair(1050000000,i));
		}
		d[1]=0;
		pq.push(make_pair(0,1));
		for (int i=0;i<nv;i++)
		{
			int n,m;
			m=pq.top().first;
			n=pq.top().second;
			pq.pop();
			if (d[n]!=m) continue;
			int v,vl;
			for (int i=0;i<e2[n].size();i+=2)
			{
				v=e2[n][i];
				vl=e2[n][i+1];
				if (d[v]>d[n]+vl)
				{
					d[v]=d[n]+vl;
					pi[v]=n;
					pq.push(make_pair(d[n]+vl,v));
				}
			}
		}
		for (int i=1;i<=nv;i++)
		{
			ans+=d[i];
		}
		printf("%lld\n",ans);
	}
}