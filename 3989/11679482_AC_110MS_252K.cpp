#include <iostream>
#include <string>
using namespace std;

int a,b,c,d,e,ans;
int check_same[10];
const int DEBUG=0;

int make(string s)
{
	int ans=0;
	switch(s[0])
	{
	case'A':
		if (a==0&&s.length()>1) return -1;
		break;
	case'B':
		if (b==0&&s.length()>1) return -1;
		break;
	case'C':
		if (c==0&&s.length()>1) return -1;
		break;
	case'D':
		if (d==0&&s.length()>1) return -1;
		break;
	case'E':
		if (e==0&&s.length()>1) return -1;
	}
	for (int i=0;i<s.length();i++)
	{
		ans*=10;
		switch(s[i])
		{
		case'A':
			ans+=a;
			break;
		case'B':
			ans+=b;
			break;
		case'C':
			ans+=c;
			break;
		case'D':
			ans+=d;
			break;
		case'E':
			ans+=e;
		}
	}	
	return ans;
}

int main()
{
	int T;
	cin>>T;
	string s1,s2,s3;
	while (T--)
	{
		cin>>s1>>s2>>s3;
		bool af,bf,cf,df,ef;
		a=b=c=d=e=ans=af=bf=cf=df=ef=0;
		for (int i=0;i<s1.length();i++)
			{switch(s1[i]){case'A':af=1;break;case'B':bf=1;break;case'C':cf=1;break;case'D':df=1;break;case'E':ef=1;}}
		for (int i=0;i<s2.length();i++)
			{switch(s2[i]){case'A':af=1;break;case'B':bf=1;break;case'C':cf=1;break;case'D':df=1;break;case'E':ef=1;}}
		for (int i=0;i<s3.length();i++)
			{switch(s3[i]){case'A':af=1;break;case'B':bf=1;break;case'C':cf=1;break;case'D':df=1;break;case'E':ef=1;}}
		for (a=0;a<=af*9;a++)
		for (b=0;b<=bf*9;b++)
		for (c=0;c<=cf*9;c++)
		for (d=0;d<=df*9;d++)
		for (e=0;e<=ef*9;e++)
		{
			memset(check_same,0,sizeof(check_same));
			if (af) check_same[a]++;
			if (bf) check_same[b]++;
			if (cf) check_same[c]++;
			if (df) check_same[d]++;
			if (ef) check_same[e]++;
			bool c_same=0;for (int i=0;i<10;i++) if (check_same[i]>1) c_same=1;if (c_same) continue;

			int aa=make(s1);
			int bb=make(s2);
			int cc=make(s3);
			if (aa<0||bb<0||cc<0) continue;

			if (aa+bb==cc) {ans++;if (DEBUG) cout<<aa<<"+"<<bb<<"="<<cc<<endl;}
			if (aa-bb==cc) {ans++;if (DEBUG) cout<<aa<<"-"<<bb<<"="<<cc<<endl;}
			if (aa*bb==cc) {ans++;if (DEBUG) cout<<aa<<"*"<<bb<<"="<<cc<<endl;}
			if (bb&&(double)aa/(double)bb==(double)cc) {ans++;if (DEBUG) cout<<aa<<"/"<<bb<<"="<<cc<<endl;}

		}
		cout<<ans<<endl;
	}
	return 0;	
}