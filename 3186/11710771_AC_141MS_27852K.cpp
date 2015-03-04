#include<iostream>

using namespace std;

int a[2001];
int f[2001][2001]={0};
int s[2001][2001]={0};
int max(int a,int b) {return a>b?a:b;}

int sum(int aa,int b) {
	if (b==0) return 0;
	if (s[aa][b]) return s[aa][b]; 
	if (s[aa+1][b-1]) {
		s[aa][b]=s[aa+1][b-1]+a[aa];
		return s[aa+1][b-1]+a[aa]; 
	}
	s[aa][b]=s[aa][b-1]+a[aa+b-1];
	return s[aa][b-1]+a[aa+b-1];
}

int main()
{
	int n,ans=0,frnt=0,rear,age=1;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		s[i][1]=a[i];
	}
	for (int i=1;i<=n;i++)
		for(int j=0;j<n-i+1;j++)
			f[j][i]=sum(j,i)+max(f[j][i-1],f[j+1][i-1]);
	cout<<f[0][n]<<endl;
	//system("pause");
	return 0;
}