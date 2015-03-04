
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a,maxx,minn;
int b;
    while (scanf("%d%d",&a,&b)!=EOF) {
        long long ans;
        for (ans=0;ans<1000000;ans++)
        {
            long long tmp=pow((double)ans, b);
            if (tmp>a)
            {
                maxx=tmp;
                minn=pow((double)ans-1,b);
                break;
            }
        }
        if (maxx-a<=a-minn)
            cout<<ans<<endl;
        else
            cout<<ans-1<<endl;
    }
    return 0;
}