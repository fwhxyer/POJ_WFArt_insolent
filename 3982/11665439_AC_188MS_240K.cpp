#include <iostream>
#include <string>

using namespace std;

int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;}

struct BigNum
{
	string data;
	BigNum(){data="0";}
	BigNum(int a){if (a>0) data="";else data="0";while (a>0) {data+=char(a%10+'0');a/=10;}}
	BigNum(string a){data=a;}
	BigNum operator +(const BigNum &a){
		string tmp="";
		int tmpi=0;
		int i;
		for (i=0;i<min(a.data.length(),data.length());i++)
		{
			tmp+=(tmpi+a.data[i]+data[i]-2*'0')%10+'0';
			tmpi=(tmpi+a.data[i]+data[i]-2*'0')/10;
		}
		for (i=min(a.data.length(),data.length());i<max(a.data.length(),data.length());i++)
		{
			if (i<a.data.length()) tmpi+=a.data[i]-'0';
			if (i<data.length()) tmpi+=data[i]-'0';
			tmp+=char(tmpi%10+'0');
			tmpi/=10;
		}
		while (tmpi){
			tmp+=char(tmpi%10+'0');
			tmpi/=10;
		}
		return BigNum(tmp);
	}
	void print()
	{
		for (int i=0;i<data.length();i++)
		{
			printf("%c",data[data.length()-1-i]);
		}
		printf("\n");
	}
};

BigNum A[100];

int main()
{
	int a,b,c;
	while (cin>>a>>b>>c){
		BigNum aa(a),bb(b),cc(c),dd(0);
		A[0]=aa;A[1]=bb;A[2]=cc;
		for (int i=3;i<=99;i++)
			A[i]=A[i-1]+A[i-2]+A[i-3];
		A[99].print();
	}
	return 0;
}