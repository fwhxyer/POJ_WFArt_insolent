#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int p,e,ii,d,n=1;
	cin>>p>>e>>ii>>d;
	while (p!=-1&&e!=-1&&ii!=-1&&d!=-1)
	{
		p%=23;e%=28;ii%=33;
		for (int i=1;i<=21252;i++)
		{
			if(i%23==p&&i%28==e&&i%33==ii) {cout<<"Case "<<n<<": the next triple peak occurs in "<<i-d<<" days."<<endl;break;}
		}
		cin>>p>>e>>ii>>d;
		n++;
	}
}