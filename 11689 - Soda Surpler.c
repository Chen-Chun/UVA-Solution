#include<stdio.h>
int main()
{
    int N,i,n,k,m,sum,res,c,rem,e,f,av;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d %d %d",&e,&f,&c);
        sum=0;
        m=e+f;
        while(m>0) {
         res=m/c;
         if(m%c!=0 && m/c!=0){
            rem=m%c;
            m=res+rem;
         }

         else {
                m=res;
         }
        sum=sum+res;

        }
        av=sum;
        printf("%d\n",av);
    }
    return 0;
}
