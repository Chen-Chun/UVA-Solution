#include<stdio.h>
int main()
{
   long int i,t,sq,square,sum,res,rem,N,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        sum=0;

     scanf("%d",&n);
       N=n;
        for( ; ; ) {
        while(N>0){
            res=N/10;
            rem=N%10;
            N=res;
            square=rem*rem;
            sum=sum+square;
        }

         if(sum<10)
        break;
        else{
             N=sum;
             sum=0;
        }
     }


     if(sum==1){
        printf("Case #%d: %d is a Happy number.\n",i,n);
     }
     else {
        printf("Case #%d: %d is an Unhappy number.\n",i,n);


    }
    }
    return 0;
}
