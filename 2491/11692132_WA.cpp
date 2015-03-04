#include <iostream>
#include <string>
#include <map>
using namespace std;

string s[350];
map<string,string> mp,mpr;

int main()
{
	int T,TT=0,n;
	cin>>T;
	while (T--)
	{
		while (!mp.empty()) mp.erase(mp.begin());
		while (!mpr.empty()) mpr.erase(mpr.begin());
		cin>>n;
		string a,b;
		for (int i=0;i<n-1;i++){
			cin>>a>>b;
			mp.insert(make_pair(a,b));
			mpr.insert(make_pair(b,a));
		}    
		map<string,string>::iterator it;
		for (it=mpr.begin();it!=mpr.end();it++)
		{
			if (!mpr.count(it->second))
				break;
		}
		cout<<"Scenario #"<<TT++<<":\n";
		it=mp.find(it->second);
		cout<<it->first<<endl;
		while (mp.count(it->second))
		{
			cout<<it->second<<endl;
			it=mp.find(it->second);
		}
		cout<<it->second<<endl;
	}
	return 0;
}