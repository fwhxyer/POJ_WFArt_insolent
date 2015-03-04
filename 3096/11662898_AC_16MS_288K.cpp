#include <iostream>
#include <string>
#include <string.h>
using namespace std;

bool hashs[100000];

int main()
{
	string s;
	while (cin>>s&&s!="*")
	{
		bool flag=true;
		for (int j=1;j<s.length();j++){
			memset(hashs,0,sizeof(hashs));
			for(int i=0;i<s.length()-j;i++)
			{
				int tmp=(s[i]-'A')*26+(s[i+j]-'A');
				if (!hashs[tmp]) hashs[tmp]=true;
				else {flag=false;break;}
			}
			if (!flag) break;
		}
		if (flag)
			cout<<s<<" is surprising.\n";
		else
			cout<<s<<" is NOT surprising.\n";
	}
	return 0;
}
