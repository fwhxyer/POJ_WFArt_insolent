#include<iostream>
#include<math.h>
using namespace std;

int r[16],g[16],bb[16];

double dis(int a,int b,int c,int d)
{
	a-=r[d];b-=g[d];c-=bb[d];
	return sqrt(a*a+b*b+c*c+0.0);
}

int main()
{
	for (int i=0;i<16;i++)
		cin>>r[i]>>g[i]>>bb[i];
	int a,b,c;
	cin>>a>>b>>c;
	while (a!=-1&&b!=-1&&c!=-1)
	{
		int min=256*256*3,ans=0;
		for (int i=0;i<16;i++){
			double l=dis(a,b,c,i);
			if (l<min){
				min=l;ans=i;
			}
		}
		cout<<"("<<a<<","<<b<<","<<c<<") maps to ("<<r[ans]<<","<<g[ans]<<","<<bb[ans]<<")\n";
		cin>>a>>b>>c;
	}
	system("pause");
}