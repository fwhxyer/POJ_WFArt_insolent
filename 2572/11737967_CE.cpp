#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int a,b,c;
	char cc,tmp[100];
	while (cin>>a>>cc>>b>>cc>>c){
		sprintf(tmp,"%d",a);
		strrev(tmp);
		sscanf(tmp,"%d",&a);
		sprintf(tmp,"%d",b);
		strrev(tmp);
		sscanf(tmp,"%d",&b);
		sprintf(tmp,"%d",c);
		strrev(tmp);
		sscanf(tmp,"%d",&c);
		if (a+b==c)
			cout<<"True\n";
		else 
			cout<<"False\n";
		if (!a&&!b&&!c) break;
	}
	return 0;
}