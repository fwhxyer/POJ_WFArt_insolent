#include<iostream>
using namespace std;

int a[100];

int main(){
int n;
cin>>n;
int i=2,j=0;
while(i<=n)
{
a[j++]=i;
n-=i;
i++;
}
j--;
if (n){
if(n==a[j]) {n--;a[j]++;}
for(int k=j;k>j-n;k--)
a[k]++;
}
for(int i=0;i<=j;i++)
cout<<a[i]<<' ';
return 0;
}