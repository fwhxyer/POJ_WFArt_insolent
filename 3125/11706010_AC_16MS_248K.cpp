#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int c[10];

bool b()
{
	int tmp=q.front();
	for (int i=9;i>tmp;i--)
		if (c[i]) return false;
	return true;
}

int main()
{
	int T,n,m,ans,tmp;
	cin>>T;
	while(T--)
	{
		for (int i=0;i<10;i++) c[i]=0;
		while (!q.empty()) q.pop();
		ans=0;
		cin>>n>>m;
		for (int i=0;i<n;i++)
		{
			cin>>tmp;
			c[tmp]++;
			q.push(tmp);
		}
		while (m>=0)
		{
			if (m==0&&b()) break;
			if (!b())
				q.push(q.front());
			else{
				ans++;
				c[q.front()]--;
			}
			q.pop();
			if (m) m--; else m=q.size()-1;
		}
		cout<<ans+1<<endl;
	}
	return 0;
}
