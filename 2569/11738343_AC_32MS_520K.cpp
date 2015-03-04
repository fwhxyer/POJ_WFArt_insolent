#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

map<string,int> mp;
pair<int,string> a[7000];

bool cmp(pair<int,string> a,pair<int,string> b)
{
	if (a.first>b.first) return true;
	else if (a.first<b.first) return false;
	if (a.second<b.second) return true;
	return false;
}

int main()
{
	int n;
	string s,tmp;
	while (cin>>n&&n) {
		mp.clear();
		s="";
		getline(cin,tmp);
		for (int i=0;i<n;i++){
			getline(cin,tmp);
			s+=tmp;
		}
		for (int i=0;i<s.length()-1;i++){
			tmp=s.substr(i,2);
			if (mp.count(tmp)==1)
				mp[tmp]++;
			else
				mp.insert(make_pair(tmp,1));
		}
		map<string,int>::iterator checker;
		int total=0,i=0;
		for (checker=mp.begin();checker!=mp.end();checker++){
			total+=checker->second;
			a[i].first=checker->second;
			a[i++].second=checker->first;
		}
		sort(a,a+i,cmp);
		for (int j=0;j<5;j++){
			cout<<a[j].second<<" "<<a[j].first<<" ";
			printf("%.6lf\n",a[j].first/(double)total);
		}
		cout<<endl;
	}
	return 0;
}