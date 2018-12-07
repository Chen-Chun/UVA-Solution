#include<stdio.h>
#include<string.h>
int main()
{
    char ara[1000];
    int rem,sum,i,len;
    while(gets(ara)!=EOF)
    {
        len=strlen(ara);
        if(len==1 && ara[0]=='0')
            break;
        rem=0;
        for(i=0;i<len;i++)
            {
                sum=rem*10+(ara[i]-'0');
                rem=sum%17;
            }
            if(rem==0)
                printf("1\n");
            else
                printf("0\n");
    }
    return 0;
}
