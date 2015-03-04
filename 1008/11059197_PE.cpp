#include <iostream>
#include <string>
using namespace std;

string mo[19]={"pop","no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac",
	"kankin", "muan", "pax", "koyab", "cumhu","uayet"};

string moT[20]={"imix", "ik", "akbal", "kan", "chicchan", 
	"cimi", "manik", "lamat", "muluk", "ok",
	"chuen", "eb", "ben", "ix", "mem", 
	"cib", "caban", "eznab", "canac", "ahau"};

int getAns(string tmp)
{
	for (int i=0;i<19;i++)
		if (mo[i]==tmp) return i;
}

int main()
{
	int n,ans;
	cin>>n;
	cout<<n;
	for (int i=0;i<n;i++){
		int day,year;
		char cTmp;
		string mon;
		cin>>day;
		cin>>cTmp;
		cin>>mon;
		cin>>year;
		ans=year*365+getAns(mon)*20+day+1;
		cout<<(ans-1)%13+1<<" "<<moT[(ans-1)%20]<<" "<<(ans-1)/260<<endl;
	}
	system("pause");
	return 0;
}