#include <iostream>
#include <string>

using namespace std;

string name[64];
bool f[64]={0};

int main()
{
	int n,a,b;
	char c;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>name[i];
	cin>>a>>c>>b;
	a--;
	int t,nn=n;
	while (nn--)
	{
		t=b-1;
		while (t--)
		{
			while (f[a]) {
				a++;
				if (a>=n) a=0;
			}
			a++;
			if (a>=n) a=0;
			while (f[a]) {
				a++;
				if (a>=n) a=0;
			}
		}
		f[a]=1;
		cout<<name[a]<<endl;
	}
	return 0;
}