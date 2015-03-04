#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int p,e,ii,d,n=1,maxTmp=0;
	cin>>p>>e>>ii>>d;
	if (p>e) maxTmp=p;else maxTmp=e;
	if (ii>maxTmp) maxTmp=ii;
	if (d+1>maxTmp) maxTmp=d+1;
	while (p!=-1&&e!=-1&&ii!=-1&&d!=-1)
	{
		p%=23;e%=28;ii%=33;
		for (int i=maxTmp;i<=21252+maxTmp;i++)
		{
			if(i%23==p&&i%28==e&&i%33==ii) {cout<<"Case "<<n<<": the next triple peak occurs in "<<i-d<<" days."<<endl;break;}
		}
		cin>>p>>e>>ii>>d;
		n++;
	}
}