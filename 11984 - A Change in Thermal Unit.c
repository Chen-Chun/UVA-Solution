#include<stdio.h>
int main()
{
    int C,d,T,i;
    double final_temp,cd_C,d_c;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&C,&d);
        cd_C=((d-32)*5)/9.0;
        d_c=(5*32)/9.0;
        final_temp=C+cd_C+d_c;
        printf("Case %d: %.2lf\n",i+1,final_temp);

    }
    return 0;
}
