#include <iostream>
#include <string>

using namespace std;

string name[500];
bool f[500]={0};

int main()
{
	int n,a,b;
	char c;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>name[i];
	cin>>a>>c>>b;
	a--;
	for (int i=0;i<n;i++)
	{
		int bb=b-1;
		while (bb--)
		{
			while (f[a]){ a++;if (a>=n) a=0; }
			a++;if (a>=n) a=0;
		}	
		while (f[a]){ a++;if (a>=n) a=0; }
		f[a]=1;
		cout<<name[a]<<endl;
	}
	return 0;
}