#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,m,c,i,mul,test,l;
    char str[100],str1[100];
    while(scanf("%d",&test)!=EOF)
    {


        if(test==0)
            break;
            getchar();
        scanf("%s",str);
        len=strlen(str);
        t=len/test;
        m=t-1;
        c=0;
        mul=2;
        for(i=0;i<len;i++)
        {
            str1[m]=str[i];
            if(c<t-1)
                {
                    m--;
                    c++;
                }

            else
                {
                    m=(t*mul)-1;
                    c=0;
                    mul++;
                }
        }
       for(l=0;l<len;l++)
       {
           printf("%c",str1[l]);
       }
       printf("\n");
    }
    return 0;
}
