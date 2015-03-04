#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a,b;
	while (cin>>a>>b){
		if (a=="E"&&b=="E") break;
		int aa=0,bb=0;
		for (int i=0;i<a.length();i++)
		{
			if ((a[i]=='R'&&b[i]=='S')
				||(a[i]=='P'&&b[i]=='R')
				||(a[i]=='S'&&b[i]=='P'))
				aa++;
			if ((a[i]=='S'&&b[i]=='R')
				||(a[i]=='R'&&b[i]=='P')
				||(a[i]=='P'&&b[i]=='S'))
				bb++;
		}
		cout<<"P1: "<<aa<<"\nP2: "<<bb<<endl;
	}
	return 0;
}