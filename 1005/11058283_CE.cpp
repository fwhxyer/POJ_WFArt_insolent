#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		double x,y,r,s;
		cin>>x>>y;
		r=sqrt(x*x+y*y);
		s=3.1415926*r*r/2;
		int ans=s/50.0;
		if (s/50.0-ans)
			ans++;
		cout<<"Property "<<i+1<<": This property will begin eroding in year "<<ans<<"."<<endl;
	}
	cout<<"END OF OUTPUT.\n";
	return 0;
}