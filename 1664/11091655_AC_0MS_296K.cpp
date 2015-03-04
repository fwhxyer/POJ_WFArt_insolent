#include<iostream>
#include<fstream>
using namespace std;

int n,m;
int ans[10][10]={
{1,1,1,1,1,1,1,1,1,1},
{1,2,2,2,2,2,2,2,2,2},
{1,2,3,3,3,3,3,3,3,3},
{1,3,4,5,5,5,5,5,5,5},
{1,3,5,6,7,7,7,7,7,7},
{1,4,7,9,10,11,11,11,11,11},
{1,4,8,11,13,14,15,15,15,15},
{1,5,10,15,18,20,21,22,22,22},
{1,5,12,18,23,26,28,29,30,30},
{1,6,14,23,30,35,38,40,41,42}
};
/*
void put(int m,int c,int n)
{
	if (m==0) {ans++;return;}
	if (n<=0) return;
	for (int i=c;i>0;i--)
		if (m>=i)
			put(m-i,i,n-1);
}

int main()
{
	int t;
	ofstream fout("a.txt");
	fout<<"{\n";
	for (int m=1;m<=10;m++)
	{
		fout<<"{";
		for (int n=1;n<=9;n++)
		{
			ans=0;
			put(m,m,n);
			fout<<ans<<",";
		}
		ans=0;
		put(m,m,10);
		fout<<ans<<"},"<<endl;
	}
	fout<<"}\n";
	fout.close();
	//system("pause");
}
*/
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<ans[a-1][b-1]<<endl;
	}
	system("pause");
}