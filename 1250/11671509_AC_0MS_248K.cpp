#include<iostream>
#include<string>
#include<set>
#include<math.h>
using namespace std;

set<char> bed;

int main()
{
	string s;
	int n;
	while (cin>>n&&n)
	{
		cin>>s;
		int ans=0;
		for (int i=0;i<s.length();i++)
		{
			//cout<<"ddddddd  "<<bed.count(s[i])<<"  "<<bed.size()<<endl;
			if (bed.count(s[i])==0&&bed.size()<n){
				bed.insert(s[i]);
			}else if (bed.count(s[i])==0){
				bed.insert(s[i]);
				ans++;
			}else{
				bed.erase(bed.find(s[i]));
			}
			//cout<<"ddddddddddd  "<<ans<<endl;
		}
		if (ans==0)
			cout<<"All customers tanned successfully."<<endl;
		else
			cout<<ans<<" customer(s) walked away."<<endl;
	}
	return 0;
}