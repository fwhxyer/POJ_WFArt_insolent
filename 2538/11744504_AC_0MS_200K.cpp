#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;
char w[256];
char ww[256]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";

int main()
{
	string s;
	for (int i=1;i<strlen(ww);i++)
		w[ww[i]]=ww[i-1];
	while (getline(cin,s)){
		for (int i=0;i<s.length();i++)
			if (s[i]!=' ')
				s[i]=w[s[i]];
		cout<<s<<endl;
	}
	return 0;
}