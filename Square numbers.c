#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count,i,sqrt1;
    double sqrt2;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0 && b==0){
            break;
        }
        count=0;
        for(i=a;i<=b;i++){
            sqrt1=sqrt(i);
            sqrt2=sqrt(i);
            if(sqrt1==sqrt2){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
