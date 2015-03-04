#include<iostream>
using namespace std;

int f[30][17]={0};
bool ch[4];
int two[5]={1,2,4,8,16};

int main()
{
	int n,a;
	f[0][15]=1;
	for (int i=0;i<20;i++)
	{
		for (int j=0;j<16;j++)
			if (f[i][j])
			{
				for (int k=0;k<4;k++)
					if (j&(1<<k)) ch[k]=1;
					else ch[k]=0;
				int tmp=0;
				for (int k=0;k<4;k++)
					if (!ch[k]) tmp+=two[k];
				if (1)
					f[i+1][tmp]+=f[i][j];
				if (ch[0]&&ch[1]) 
					f[i+1][tmp+1+2]+=f[i][j];
				if (ch[1]&&ch[2]) 
					f[i+1][tmp+2+4]+=f[i][j];
				if (ch[2]&&ch[3]) 
					f[i+1][tmp+4+8]+=f[i][j];
				if (ch[0]&&ch[1]&&ch[2]&&ch[3])
					f[i+1][tmp+15]+=f[i][j];
				/*
				for (int i1=1;i1>=(1-ch[0]);i1--)
				for (int i2=1;i2>=(1-ch[1]);i2--)
				for (int i3=1;i3>=(1-ch[2]);i3--)
				for (int i4=1;i4>=(1-ch[3]);i4--)
				{
					f[i+1][i4*8+i3*4+i2*2+i1*1]+=f[i][j];
				}*/
			}
	}
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a;
		cout<<i<<' '<<f[a][15]<<endl;
	}
}