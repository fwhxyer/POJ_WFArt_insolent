//
//  main.cpp
//  3100
//
//  Created by 范 威 on 13-5-28.
//  Copyright (c) 2013年 范 威. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int a,b,maxx,minn;
    while (scanf("%d%d",&a,&b)!=EOF) {
        int ans;
        for (ans=0;ans<1000000;ans++)
        {
            int tmp=pow((double)ans, (double)b);
            if (tmp>a)
            {
                maxx=tmp;
                minn=pow(ans-1,b);
                break;
            }
        }
        if (maxx-a<a-minn)
            cout<<ans<<endl;
        else
            cout<<ans-1<<endl;
    }
    return 0;
}
