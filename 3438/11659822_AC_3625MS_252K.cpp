#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin>>T;
	string s,s1;
	while(T--){
		cin>>s;
		s1="";
		int tmp=1;
		for (int i=1;i<s.length();i++)
		{
			if (s[i]==s[i-1])
				tmp++;
			else {
				string s2;
				stringstream ss;
				ss<<tmp;
				ss>>s2;
				s1+=s2;
				s1+=s[i-1];
				tmp=1;
			}
		}
		string s2;
		stringstream ss;
		ss<<tmp;
		ss>>s2;
		s1+=s2;
		s1+=s[s.length()-1];
		cout<<s1<<endl;
	}
	return 0;
}
