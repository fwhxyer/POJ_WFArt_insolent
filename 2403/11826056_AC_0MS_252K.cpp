#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> mp;

int main()
{
	int n,m,v;
	string s;
	cin>>m>>n;
	for (int i=0;i<m;i++)
	{
		cin>>s>>v;
		mp.insert(make_pair(s,v));
	}
	while (n--){
		int ans=0;
		while (cin>>s&&s!="."){
			if (mp.count(s))
				ans+=mp[s];
		}
		cout<<ans<<endl;
	}
	return 0;
}