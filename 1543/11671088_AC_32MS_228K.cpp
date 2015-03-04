#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,n;
	cin>>n;
	for (int i=2;i<=n;i++)
	{
		a=i*i*i;
		for (b=2;b<n;b++)
			for (c=b;c<n;c++)
				for (d=c;d<n;d++)
				{
					if (b*b*b+c*c*c+d*d*d==a)
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,b,c,d);
					else if (b*b*b+c*c*c+d*d*d>a)
						break;
				}
	}
	return 0;
}