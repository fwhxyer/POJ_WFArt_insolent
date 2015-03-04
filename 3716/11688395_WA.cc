#include <stdio.h>

int main()
{
    int t, p, q;
    
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &p, &q);
        printf("%.3lf\n", (double)(p+q+10)/7);
    }

    return 0;
}