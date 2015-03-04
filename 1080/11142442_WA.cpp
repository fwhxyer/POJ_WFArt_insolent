#include<iostream>
#include<string>
using namespace std;

int f[101][101];
int a[100],b[100];
int aL,bL;
int val[5][5]={{5,-1,-2,-1,-3},{-1,5,-3,2,4},{-2,-3,5,-2,-2},
			   {-1,-2,-2,5,-1},{-3,-4,-2,-1,-1001}};

int main()
{
	int t;
	cin>>t;
	char tmp;
	for (int i=0;i<t;i++){
		cin>>aL;
		for (int i=0;i<aL;i++){
			cin>>tmp;
			switch (tmp){
			case 'A':
					a[i]=0;
					break;
			case 'C':
					a[i]=1;
					break;
			case 'G':
					a[i]=2;
					break;
			case 'T':
					a[i]=3;
					break;
			case '-':
					a[i]=4;
					break;
			}
		}
		cin>>bL;
		for (int j=0;j<bL;j++){
			cin>>tmp;
			switch (tmp){
			case 'A':
					b[j]=0;
					break;
			case 'C':
					b[j]=1;
					break;
			case 'G':
					b[j]=2;
					break;
			case 'T':
					b[j]=3;
					break;
			case '-':
					b[j]=4;
					break;
			}
		}
		memset(f,0,sizeof(f));
		for (int i=1;i<=aL;i++){f[i][0]=f[i-1][0]+val[a[i-1]][4];}
		for (int j=1;j<=bL;j++){f[0][j]=f[0][j-1]+val[4][b[j-1]];}
		f[1][0]=val[a[0]][4];
		f[0][1]=val[4][b[0]];
		for (int i=1;i<=aL;i++)
			for (int j=1;j<=bL;j++){
				f[i][j]=max(f[i-1][j-1]+val[a[i-1]][b[j-1]]
						,max(f[i][j-1]+val[4][b[j-1]],f[i-1][j]+val[a[i-1]][4]));
			}
		cout<<f[aL][bL]<<endl;
	}
	system("pause");
}