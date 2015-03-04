#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	string s[50];
	int a[50];
	for (int i=0;i<n;i++){
		cin>>s[i];
		int as=0;
		for (int j=0;j<m-1;j++){
			for (int k=j+1;k<m;k++)
				if (s[i][j]>s[i][k])
					as++;
		}
		a[i]=as;
	}
	for (int i=n-1;i>0;i--)
		for (int j=0;j<i;j++)
			if (a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				string tmps=s[j];
				s[j]=s[j+1];
				s[j+1]=tmps;
			}
	for (int i=0;i<n;i++)
		cout<<s[i]<<endl;
}