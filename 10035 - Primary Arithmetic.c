#include<stdio.h>

int main()
{
   int i,j,k,l,count,m,p;
   unsigned int num1,num2,res,rem,sum;
   unsigned int digit1[1000],digit2[1000],digit1s[1000],digit2s[1000];
   while(scanf("%u %u",&num1,&num2)!=EOF)
   {
       count=0;
       if(num1==0 && num2==0)
        break;
        i=0;
       while(num1>0)
       {
           rem=num1%10;
           res=num1/10;
           num1=res;
           digit1[i]=rem;
           i++;
       }

       j=0;
       while(num2>0)
       {
           rem=num2%10;
           res=num2/10;
           num2=res;
           digit2[j]=rem;
           j++;
       }

       if(i>j)
        l=i;
       else
        l=j;
       sum=0;
       p=0;
       for(k=l-1;k>=0;k--)
       {
           sum=digit1[k]+digit2[k]+p;
          if(sum>9)
          {
              count++;
              sum=sum/10;
              p=sum;
          }
       }
      if(count==0)
        printf("No carry operation.\n");
      else
        printf("%d carry operations.\n",count);
   }

   return 0;
}
