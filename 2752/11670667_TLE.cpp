#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (cin>>s){
		string a,b;
		bool flag=true;
		for (int i=1;i<=s.length();i++)
		{
			if (  s.substr(0,i)==s.substr(s.length()-i,i)  )
			{	
				if (!flag) cout<<" ";
				if (flag) flag=false;
				cout<<i;
			}
		}
		cout<<endl;
	}
	return 0;
}