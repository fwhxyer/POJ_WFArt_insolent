#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	char cc,tmp[100];
	string s,stmp;
	while (cin>>s){
		stmp=s.substr(0,s.find('+'));
		s=s.substr(s.find('+')+1,s.length()-s.find('+')-1);
		reverse(stmp.begin(),stmp.end());
		sscanf(stmp.c_str(),"%d",&a);
		stmp=s.substr(0,s.find('='));
		s=s.substr(s.find('=')+1,s.length()-s.find('=')-1);
		reverse(stmp.begin(),stmp.end());
		sscanf(stmp.c_str(),"%d",&b);
		reverse(s.begin(),s.end());
		sscanf(s.c_str(),"%d",&c);
		if (a+b==c)
			cout<<"True\n";
		else 
			cout<<"False\n";
		if (!a&&!b&&!c) break;
	}
	return 0;
}