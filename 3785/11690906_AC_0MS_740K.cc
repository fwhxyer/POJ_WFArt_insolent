#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
	int T,TT;
	char s[100];
	cin>>T;
	while (T--)
	{
		cin>>TT>>s;
		int i;
		for (i=strlen(s)-1;i>0;i--)
		{
			if (s[i-1]<s[i]) break;
		}
		if (!i) {cout<<TT<<" BIGGEST\n";continue;}
		char mins=127;int p=0;
		for (int j=i;j<strlen(s);j++)
		{
			if (s[i-1]<s[j]&&s[j]<mins) {mins=s[j];p=j;}
		}
		s[i-1]^=s[p]^=s[i-1]^=s[p];
		sort(s+i,s+strlen(s));
		cout<<TT<<" "<<s<<endl;
	}
	return 0;
}