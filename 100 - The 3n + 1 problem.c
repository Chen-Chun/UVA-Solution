#include<stdio.h>
int main()
{
    int i,j,n,c,a,b,max,t;
    while(scanf("%d %d",&i,&j)!=EOF)
    {
        if(i<j){
            a=i;
            b=j;
        }
        else{
            a=j;
            b=i;
        }
        c=1;
        max=0;

        for(n=a;n<=b;n++){
            c=1;
            t=n;
            while(t>=1){
            if(t==1)

            break;

            if(t%2!=0){
                t=3*t+1;
            }
            else if(t%2==0) {
                t=t/2;
            }

            c++;

            }
              if(c>max)
                max=c;


        }
        printf("%d %d %d\n",i,j,max);
    }
    return 0;
}
