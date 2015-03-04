#include <iostream>
#include <string.h>
using namespace std;

void strrev(char s[]){
	for (int i=0;i<strlen(s)/2;i++)
	{
		char tmp=s[i];
		s[i]=s[strlen(s)-i-1];
		s[strlen(s)-i-1]=tmp;
	}
}

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