#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,string> mp;
int main()
{
	int n,nn;
	string a,b;
	cin>>n>>nn;
	for (int i=0;i<n;i++){
		cin>>a>>b;
		mp.insert(make_pair(a,b));
	}
	while (nn--)
	{
		cin>>a;
		if (mp.count(a))
			cout<<mp[a];
		else if (a.length()>2&&a[a.length()-1]=='y'
			&&a[a.length()-2]!='a'&&a[a.length()-2]!='e'&&a[a.length()-2]!='i'
			&&a[a.length()-2]!='o'&&a[a.length()-2]!='u')
			cout<<a.substr(0,a.length()-1)<<"ies";
		else if (a.length()>1&&(a[a.length()-1]=='x'||a[a.length()-1]=='o'||a[a.length()-1]=='s'))
			cout<<a<<"es";
		else if (a.length()>2&&
				(a[a.length()-1]=='h'&&(a[a.length()-2]=='c'||a[a.length()-2]=='s')))
			cout<<a<<"es";
		else 
			cout<<a<<"s";
		cout<<endl;
	}
	return 0;
}