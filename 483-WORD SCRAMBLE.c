#include<stdio.h>
int main()
{
    char c,word[100],rev_word[100];
    int ch=0,i=0,s,p;
     while ((c = getchar()) != EOF) {
    if (c == '\n') {
        putchar(c);
    } else  {

        if(c==' ')
           {

            ch=1;


           }
           else
        {
            if(ch==0)
         {
             word[i]=c;
             i++;
         }
         else if(ch==1)
         {
             for(s=0,p=i-1;s<i;s++,p--)
             {
                 rev_word[s]=word[p];
                 printf("%c",rev_word[s]);
             }
             printf(" ");
             ch=0;
             i=0;
         }

        }


    }
}

    return 0;
}
