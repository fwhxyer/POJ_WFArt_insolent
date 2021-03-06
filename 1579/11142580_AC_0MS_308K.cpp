#include<iostream>
#include<string>
using namespace std;

int f[21][21][21];
int w(int a,int b,int c)
{
	if (a<=0||b<=0||c<=0)
		return 1;
	if (a>20||b>20||c>20)
		return f[20][20][20]=w(20,20,20);
	if (f[a][b][c]) return f[a][b][c];
	if (a<b && b<c)
		return f[a][b][c]=w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c) ;
	return f[a][b][c]=w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main()
{
	int a,b,c;
	while (cin>>a>>b>>c && (!(a==-1&&b==-1&&c==-1)))
	{
		memset(f,0,sizeof(f));
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
	}
	system("pause");
}