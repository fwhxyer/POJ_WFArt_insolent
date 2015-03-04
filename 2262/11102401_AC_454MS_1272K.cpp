#include<iostream>
#include<math.h>
using namespace std;

bool p[1000001];

int main()
{
	fill(p,p+1000001,1);
	p[0]=p[1]=0;
	for (int i=2;i<=sqrt(1000000.0);i++)
		if (p[i]){
			for (int j=2;j<=1000000/i;j++)
				p[i*j]=false;
		}
	int n;
	cin>>n;
	while (n){
		bool flag=true;
		for (int i=2;i<n;i++)
			if (p[i]&&p[n-i]){
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag=false;
				break;
			}
		if (flag) cout<<"Goldbach's conjecture is wrong.\n";
		cin>>n;
	}
	system("pause");
}