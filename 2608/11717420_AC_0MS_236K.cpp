#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int> mp;
int main()
{
	mp.insert(make_pair("0",-1));
	mp.insert(make_pair("A",0));
	mp.insert(make_pair("E",0));
	mp.insert(make_pair("I",0));
	mp.insert(make_pair("O",0));
	mp.insert(make_pair("U",0));
	mp.insert(make_pair("W",0));
	mp.insert(make_pair("H",0));
	mp.insert(make_pair("Y",0));
	mp.insert(make_pair("B",1));
	mp.insert(make_pair("F",1));
	mp.insert(make_pair("P",1));
	mp.insert(make_pair("V",1));
	mp.insert(make_pair("C",2));
	mp.insert(make_pair("G",2));
	mp.insert(make_pair("S",2));
	mp.insert(make_pair("J",2));
	mp.insert(make_pair("K",2));
	mp.insert(make_pair("Q",2));
	mp.insert(make_pair("X",2));
	mp.insert(make_pair("Z",2));
	mp.insert(make_pair("D",3));
	mp.insert(make_pair("T",3));
	mp.insert(make_pair("L",4));
	mp.insert(make_pair("M",5));
	mp.insert(make_pair("N",5));
	mp.insert(make_pair("R",6));
	string s;
	while (cin>>s)
	{
		string ss="0",st="0";
		for (int i=0;i<s.length();i++){
			ss[0]=s[i];
			if (i) st[0]=s[i-1];
			if (mp[ss]&&(mp[ss]!=mp[st]))
				cout<<mp[ss];
		}
		cout<<endl;
	}
}
