#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,zap;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1)
            break;
            zap=abs(a-b);
        if(zap>50)
        {
            if(a<b)
                zap=(100-b)+a;
            else
                zap=(100-a)+b;
        }
        printf("%d\n",zap);
    }
    return 0;
}
