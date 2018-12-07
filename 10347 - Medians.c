#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,w,s,res,area;
    while(scanf("%lf %lf %lf",&u,&v,&w)!=EOF){
        if(u<=0 || v<=0 || w<=0){
            printf("-1.000\n");
        }
        else{
            s=(u+v+w)/2;
            res=(s*(s-u)*(s-v)*(s-w));
            if(res>0){
                area=(4/3.0)*sqrt(res);
                printf("%.3lf\n",area);
            }
            else
                printf("-1.000\n");
        }
    }
    return 0;
}
