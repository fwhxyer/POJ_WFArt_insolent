#include<iostream>
#include<string>
using namespace std;

string change(string s){
	for (int i=0;i<s.length();i++)
		if (s[i]>='A'&&s[i]<='Z') {
			s[i]-=5;
			if (s[i]<'A') s[i]+=26;
		}
	return s;
}
int main()
{
	string ss,s;
	cin>>s;
	while (s!="ENDOFINPUT"){
		if (s=="START")
			cin>>s;
		if (s=="END") {cout<<endl;cin>>s;continue;}
		else{
			cout<<change(s);
			cin>>s;
		}
		while (s!="END"){
			cout<<" "<<change(s);
			cin>>s;
		}
	}
	system("pause");
}