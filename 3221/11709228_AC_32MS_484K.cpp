#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <string.h>
using namespace std;

bool b[5050];
queue<pair<string,int>> q;
map<string,int> mp;
int way[7][4]={{3,2,4,6},{2,2,6},{3,0,1,3},{2,2,4},{3,0,3,5},{2,4,6},{3,0,1,5}};

int cantor(string s)
{
	int ans=0;
	for (int i=0;i<s.length()-1;i++)
	{
		int tmp=0;
		for (int j=i+1;j<s.length();j++)
			if (s[i]>s[j]) tmp++;
		ans=(ans+tmp)*(s.length()-i-1);
	}
	return ans;
}

int main()
{
	int T;
	cin>>T;
	string s="0123456",st;
		memset(b,0,sizeof(b));
		b[0]=1;
		q.push(make_pair(s,0));
		mp.insert(make_pair(s,0));
		while (!q.empty()){
			string s=q.front().first;
			int ans=q.front().second;
			q.pop();
			int p;
			for (p=0;p<s.length();p++)
				if (s[p]=='0') break;
			for (int i=1;i<=way[p][0];i++){
				st=s;
				st[p]^=st[way[p][i]]^=st[p]^=st[way[p][i]];
				int tmp=cantor(st);
				if (!b[tmp])
				{
					b[tmp]=1;
					q.push(make_pair(st,ans+1));
					mp.insert(make_pair(st,ans+1));
				}
			}
		}

	while(T--){
		cin>>s;
		if (mp.count(s))
			cout<<mp[s]<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}