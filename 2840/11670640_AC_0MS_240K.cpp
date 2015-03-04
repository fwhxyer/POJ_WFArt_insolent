#include <iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		char c;
		cin>>a>>c>>b;
		if (b!=0) cout<<0<<endl;
		else
		{
			if (a==0||a==24)
				cout<<"12\n";
			else if (a==12)
				cout<<"24\n";
			else
				cout<<(a+12)%24<<endl;
		}
	}
	return 0;
}