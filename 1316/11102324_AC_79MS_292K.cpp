#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool ha[11000];

int d(int i)
{
	stringstream ss;
	string s;
	ss<<i;
	ss>>s;
	int ans=i;
	for (int j=0;j<s.length();j++)
		ans+=s[j]-'0';
	return ans;
}

int main()
{
	fill(ha,ha+10001,1);
	for (int i=1;i<10000;i++)
		ha[d(i)]=false;
	for(int i=1;i<10000;i++)
		if (ha[i]) cout<<i<<endl;
	system("pause");
}