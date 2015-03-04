#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int a[26];
int main()
{
	int T,TT=0;
	cin>>T;
	string s1,s2;
	getline(cin,s1);
	while (T--)
	{
		memset(a,0,sizeof(a));
		getline(cin,s1);
		getline(cin,s2);
		for (int i=0;i<s1.length();i++)
			a[s1[i]-'a']++;
		for (int i=0;i<s2.length();i++)
			a[s2[i]-'a']--;
		int ans=0;
		for (int i=0;i<26;i++)
			ans+=abs(a[i]);
		cout<<"Case #"<<++TT<<":  "<<ans<<endl;
	}
	return 0;
}