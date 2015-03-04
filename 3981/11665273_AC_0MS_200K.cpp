#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	while(getline(cin,s)){
		for (int i=0;i<s.length()-2;i++)
			if (s.substr(i,3)=="you")
				s=s.substr(0,i)+"we"+s.substr(i+3,s.length()-i-3);
		cout<<s<<endl;
	}
	return 0;
}