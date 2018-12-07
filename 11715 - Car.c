#include<stdio.h>
#include<math.h>
int main()

{
    int T,c=1;
    double a,u,s,t,v,m,n,l;
    while(scanf("%d",&T)!=EOF){
            if(T==0)
            break;
    else {
            scanf("%lf %lf %lf",&l,&m,&n);


         if(T==1)
        {
            u=l;
            v=m;
            t=n;
            a=(v-u)/t;
            s=(u*t)+(a*t*t)/2.0;
            printf("Case %d: %.3lf %.3lf\n",c,s,a);

        }
        else if(T==2)
        {
           u=l;
           v=m;
           a=n;
           t=(v-u)/a;
           s=(u*t)+(a*t*t)/2.0;
           printf("Case %d: %.3lf %.3lf\n",c,s,t);


        }
        else if(T==3)
        {
           u=l;
           a=m;
           s=n;
           v=sqrt((u*u)+2.0*a*s);
           t=(v-u)/a;
           printf("Case %d: %.3lf %.3lf\n",c,v,t);


        }
        else if(T==4)
        {
           v=l;
           a=m;
           s=n;
           u=sqrt((v*v)-2.0*a*s);
           t=(v-u)/a;
           printf("Case %d: %.3lf %.3lf\n",c,u,t);


        }
        c++;
    }
    }

    return 0;
}
