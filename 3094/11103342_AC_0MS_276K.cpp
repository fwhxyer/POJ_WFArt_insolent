#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	while (s!="#"){
		int ans=0;
		for (int i=0;i<s.length();i++)
			if (s[i]!=' ')
				ans+=(i+1)*(s[i]-'A'+1);
		cout<<ans<<endl;
		getline(cin,s);
	}
	system("pause");
}