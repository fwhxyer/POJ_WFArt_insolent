#include <iostream>
#include <stdio.h>
#include <math.h>

#define pi 3.1415926535
using namespace std;

int main()
{
	int a,b,s,m,n;
	while (scanf("%d%d%d%d%d",&a,&b,&s,&m,&n)) {
		if (!a&&!b&&!s&&!m&&!n) break;
		double deg=atan((double)(b*n)/(double)(a*m));
		double v=b*n/sin(deg)/s;
		printf("%0.2lf %0.2lf\n",deg/pi*180.0,v);
	}
	return 0;
}
