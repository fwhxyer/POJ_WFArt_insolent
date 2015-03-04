#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<queue>
#include<functional>

using namespace std;

int available;
int listSpace[2005000];
int listPi[2005000];

int e[1000001];
int e2[1000001];
priority_queue<pair<long long,int>,vector<pair<long long,int> >,greater<pair<long long,int> > > pq;
long long d[1000001];
int pi[1000001];

int New()
{
    listSpace[available]=0;
	listPi[available]=-1;
	return available++;
}

void pb(int a,int data)
{
	while (listPi[a]!=-1) a=listPi[a];
	listPi[a]=available++;
	a=listPi[a];
	listSpace[a]=data;
	listPi[a]=-1;
}
/*
int find(int a,int b)
{
	for (int i=0;i<b;i++)
	{
		a=listPi[a];
	}
	return listSpace[a];
}
*/
int main()
{
	int T;
	cin>>T;
	int nv,ne;
	while (T--)
	{
		scanf("%d%d",&nv,&ne);
		available=0;
		for (int i=0;i<=ne;i++)
		{
			e[i]=New();
			e2[i]=New();
		}
		int a,b,c;
		for (int i=0;i<ne;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			//e[a].push_back(b);
			//e[a].push_back(c);
			//e2[b].push_back(a);
			//e2[b].push_back(c);
			pb(e[a],b);
			pb(e[a],c);
			pb(e2[b],a);
			pb(e2[b],c);
		}
		for (int i=0;i<pq.size();i++)
			pq.pop();
		for (int i=0;i<=nv;i++){
			d[i]=1050000000;
			pi[i]=-1;
			//pq.push(make_pair(1050000000,i));
		}
		d[1]=0;
		pq.push(make_pair(0,1));
		int n,m,v,vl,tmp;
		for (int i=0;i<nv;i++)
		{
			m=pq.top().first;
			n=pq.top().second;
			pq.pop();
			if (d[n]!=m) continue;
			tmp=listPi[e[n]];
			while (tmp!=-1)
			{
				//v=e[n][i];
				//vl=e[n][i+1];
				v=listSpace[tmp];
				tmp=listPi[tmp];
				vl=listSpace[tmp];
				if (d[v]>d[n]+vl)
				{
					d[v]=d[n]+vl;
					pi[v]=n;
					pq.push(make_pair(d[n]+vl,v));
				}
				tmp=listPi[tmp];
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
			//pq.push(make_pair(1050000000,i));
		}
		d[1]=0;
		pq.push(make_pair(0,1));
		for (int i=0;i<nv;i++)
		{
			m=pq.top().first;
			n=pq.top().second;
			pq.pop();
			if (d[n]!=m) continue;
			tmp=listPi[e2[n]];
			while (tmp!=-1)
			{
				//v=e2[n][i];
				//vl=e2[n][i+1];
				v=listSpace[tmp];
				tmp=listPi[tmp];
				vl=listSpace[tmp];
				if (d[v]>d[n]+vl)
				{
					d[v]=d[n]+vl;
					pi[v]=n;
					pq.push(make_pair(d[n]+vl,v));
				}
				tmp=listPi[tmp];
			}
		}
		for (int i=1;i<=nv;i++)
		{
			ans+=d[i];
		}
		printf("%lld\n",ans);
	}
}
