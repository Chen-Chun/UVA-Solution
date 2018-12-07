#include<stdio.h>
#include<math.h>
#include<math.h>
#define Pi acos(-1)
int main()
{
    int t,l,i;
    double w,r;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&l);
        w=(6*l)/10.0;
        r=(l/5.0);

        printf("%.2lf %.2lf\n",Pi*r*r,(w*l)-(Pi*r*r));
    }
    return 0;
}
