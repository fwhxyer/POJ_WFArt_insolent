#include <iostream>
#include <string>
#include <map>

using namespace std;

string aa[30]={"01","1000","1010","100","0","0010","110","0000","00","0111","101","0100","11","10",
	"111","0110","1101","010","000","1","001","0001","011","1001","1011","1100","0011","0101","1110","1111"};

char finds(string s){
	for (int i=0;i<26;i++)
	{
		if (aa[i]==s)
			return 'A'+i;
	}
	if (s==aa[26]) return '_';
	if (s==aa[27]) return ',';
	if (s==aa[28]) return '.';
	if (s==aa[29]) return '?';
}

int main()
{
	int T;
	cin>>T;
	string s,ss,sss;
	for (int i=0;i<T;i++)
	{
		cin>>s;
		ss="";
		sss="";
		for (int i=0;i<s.length();i++)
		{
			if (s[i]-'A'>=0&&s[i]-'A'<=26){
				ss+=aa[s[i]-'A'];
				sss+=char(aa[s[i]-'A'].length());
			}else {
				switch(s[i]){
				case '_':
					ss+=aa[26];
					break;
				case ',':
					ss+=aa[27];
					break;
				case '.':
					ss+=aa[28];
					break;
				case '?':
					ss+=aa[29];
					break;
				}
				sss+=char(4);
			}
		}
		int tmp=0;
		s="";
		for (int i=sss.length()-1;i>=0;i--)
		{
			int t=sss[i];
			string tmps=ss.substr(tmp,t);
			tmp+=t;
			s+=finds(tmps);
		}
		cout<<i+1<<": "<<s<<endl;
	}
	return 0;
}