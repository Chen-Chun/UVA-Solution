#include<stdio.h>
int main()
{
    int i,j,flag,flag1=0,count=0,k,s;
     long long int n,c;
        n=1;
        while(1){
                s=0;

        for(j=2;j<=n/2;j++) {
            flag=0;
            flag1=0;
            if(n%j==0){
                    s=1;

               for(k=2;k<=j/2;k++){
                if(j%k==0){
                        flag=1;
                    break;
                }
               }
               if(flag==0 && (j==2 || j==3 || j==5))
                flag1=0;

                else if(flag==0 &&(j!=2 && j!=3 && j!=5))
                    {flag1=1;
                     break;
                    }


            }


        }
      c=n;
      if(s==0 && n!=2 && n!=3 && n!=5 && n!=1){
        flag1=1;
      }
      if(flag1==0 || n==1)
        count++;
            if(count==1500)
            break;

            n++;

        }
    printf("%lld ",c);
    return 0;
}
