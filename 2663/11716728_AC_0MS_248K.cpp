#include <iostream>
#include <string.h>
using namespace std;

int f[31][8];

int main()
{
	int n;
	while (cin>>n&&n!=-1){
		memset(f,0,sizeof(f));
		f[0][7]=1;
		for (int i=1;i<=n;i++){
			f[i][0]=f[i-1][7];
			f[i][1]=f[i-1][6];
			f[i][2]=f[i-1][5];
			f[i][3]=f[i-1][4]+f[i-1][7];
			f[i][4]=f[i-1][3];
			f[i][5]=f[i-1][2];
			f[i][6]=f[i-1][1]+f[i-1][7];
			f[i][7]=f[i-1][0]+f[i-1][6]+f[i-1][3];
		}
		cout<<f[n][7]<<endl;
	}
	return 0;
}