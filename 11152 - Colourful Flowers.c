#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p;
    double s,v,r,r1,v1,ph,v2,sr,sr1,PI;
    PI=acos(-1.0);
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        ph=(a+b+c)/2.0;
         p=a+b+c;
        v1=ph*(ph-a)*(ph-b)*(ph-c);
            v2=sqrt(v1);
        sr=(a*b*c)/(4.0*v2);
        sr1=PI*sr*sr;
        r1=(2*v2)/p;
        r=PI*r1*r1;
        v=v2-r;
        s=sr1-v2;
        printf("%.4lf %.4lf %.4lf\n",s,v,r);

    }
    return 0;
}
