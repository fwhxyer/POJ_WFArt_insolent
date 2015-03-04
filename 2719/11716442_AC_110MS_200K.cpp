#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

long long pow9[15]={1,9,81,729,6561,59049,531441,4782969,43046721,387420489};

int main()
{
	char n[100],nn[100];
	while (scanf("%s",n)){
		if (n[0]=='0'&&strlen(n)==1) break;
		int ans=0;int i;
		for (i=0;n[i]!='\0';i++)
			nn[i]=n[i];
		nn[i]='\0';
		for (int i=0;i<strlen(n);i++)
			if (n[i]>'3') n[i]--;
		for (int i=strlen(n)-1;i>=0;i--)
			ans+=pow9[strlen(n)-1-i]*(n[i]-'0');
		cout<<nn<<": "<<ans<<endl;
	}
}