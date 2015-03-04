#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF) {
        int ans;
        for (ans=0;ans<=1000100;ans++)
        {
            if (pow(ans, b)>=a)
                break;
        }
        if (pow(ans,b)-a<a-pow(ans-1,b))
            cout<<ans;
        else
            cout<<ans-1;
        cout<<endl;
    }
    return 0;
}