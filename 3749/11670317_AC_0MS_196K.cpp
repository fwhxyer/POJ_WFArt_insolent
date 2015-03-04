#include<iostream>
#include<string>
using namespace std;

string ch="VWXYZABCDEFGHIJKLMNOPQRSTU";

int main()
{
	string s1,s2,s3;
	while (cin>>s1&&s1=="START")
	{
		getline(cin,s2);
		getline(cin,s2);
		cin>>s3;
		for (int i=0;i<s2.length();i++)
			if (s2[i]-'A'>=0&&s2[i]-'A'<26)
				s2[i]=ch[s2[i]-'A'];
		cout<<s2<<endl;
	}
	return 0;
}