#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		if (s=="0") break;
		int ans=0;
		for (int i=s.length()-1;i>=0;i--)
		{
			ans+=(s[i]-'0')*(pow(2.0,s.length()-i)-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}