#include<iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int T=0;
	while (cin>>s&&s[0]!='-')
	{
		int a=0,b=0;
		cout<<++T<<". ";
		for (int i=0;i<s.length();i++)
		{
			if (s[i]=='{') a++;
			else if (s[i]=='}'&&a) a--;
			else {
				a++;
				b++;
			}
		}
		cout<<a/2+b<<endl;
	}
	return 0;
}