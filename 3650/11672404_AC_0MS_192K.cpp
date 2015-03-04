#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		if (s=="#") break;
		for (int i=0;i<s.length();i++)
		{
			switch (s[i])
			{
			case' ':
				cout<<"%20";
				break;
			case'!':
				cout<<"%21";
				break;
			case'$':
				cout<<"%24";
				break;
			case'%':
				cout<<"%25";
				break;
			case'(':
				cout<<"%28";
				break;
			case')':
				cout<<"%29";
				break;
			case'*':
				cout<<"%2a";
				break;
			default:
				cout<<s[i];
				break;
			}
		}
		cout<<endl;
	}

	return 0;
}