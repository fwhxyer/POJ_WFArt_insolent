#include<iostream>
#include<string>
using namespace std;

int two[8]={1,2,4,8,16,32,64,128};

int change(string s)
{
	int ans=0;
	for (int i=0;i<8;i++)
		if (s[i]!='0')
			ans+=two[7-i];
	return ans;
}

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		string s;
		cin>>s;
		cout<<change(s.substr(0,8))<<"."
			<<change(s.substr(8,8))<<"."
			<<change(s.substr(16,8))<<"."
			<<change(s.substr(24,8))<<endl;
	}
	system("pause");
}