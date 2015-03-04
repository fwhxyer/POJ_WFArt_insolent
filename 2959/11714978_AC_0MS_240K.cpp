#include <iostream>
#include <math.h>
using namespace std;

double pi=3.1415926535;
int main()
{
	int T;
	double R,r,d;
	cin>>T;
	while (T--){
		cin>>R>>r>>d;
		R/=2;r/=2;
		double tmp=d+r*2;
		tmp/=2;
		tmp=asin(tmp/(R-r));
		int ans=floor(pi/tmp);
		cout<<ans<<endl;
	}
	return 0;
}