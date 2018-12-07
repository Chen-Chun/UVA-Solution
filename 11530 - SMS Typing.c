#include<stdio.h>
int main()
{
    int T,i,count,j;
    char sms[1000];
    scanf("%d",&T);
     getchar();
    for(i=0;i<T;i++)
    {
        count=0;

     gets(sms);
        for(j=0;sms[j]!='\0';j++)
      {
          if(sms[j]=='a' || sms[j]=='d' || sms[j]=='g' || sms[j]=='j' || sms[j]=='m' || sms[j]=='p' || sms[j]=='t' || sms[j]=='w' || sms[j]==' ')
            count=count+1;
         else if(sms[j]=='b' || sms[j]=='e' || sms[j]=='h' || sms[j]=='k' || sms[j]=='n' || sms[j]=='q' || sms[j]=='u' || sms[j]=='x')
            count=count+2;
         else if(sms[j]=='c' || sms[j]=='f' || sms[j]=='i' || sms[j]=='l' || sms[j]=='o' || sms[j]=='r' || sms[j]=='v' || sms[j]=='y')
            count=count+3;
            else if(sms[j]=='s' || sms[j]=='z')
                count=count+4;



      }
      printf("Case #%d: %d\n",i+1,count);

    }
    return 0;
}
