#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<queue>
#include<functional>

using namespace std;

vector<int> e[1002];
queue<int> q;
int d[1002];
bool flag[1002];

int main()
{
		int nv,ne;
		scanf("%d%d",&ne,&nv);
		int a,b,c;
		for (int i=0;i<ne;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			e[a].push_back(b);
			e[a].push_back(c);
			e[b].push_back(a);
			e[b].push_back(c);
		}
		for (int i=0;i<=nv;i++){
			d[i]=1000000001;
			flag[i]=0;
		}
		q.push(1);
		flag[1]=true;
		d[1]=0;
		while(!q.empty())
		{
			int tmp=q.front();
			flag[tmp]=false;
			q.pop();
			for (int i=0;i<e[tmp].size();i+=2)
			{
				int v=e[tmp][i];
				long long vl=e[tmp][i+1];
				if (d[v]>d[tmp]+vl)
				{
					d[v]=d[tmp]+vl;
					if (!flag[v]) {q.push(v);flag[v]=true;}
				}
			}
		}

		printf("%d\n",d[nv]);
		return 0;
}
