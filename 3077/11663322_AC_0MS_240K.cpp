#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		string s="";
		int n;
		cin>>n;
		while (n>10)
		{
			if (n%10>=5)
				n+=10;
			s=s+'0';
			n/=10;
		}
		cout<<n<<s<<endl;
	}
	return 0;
}