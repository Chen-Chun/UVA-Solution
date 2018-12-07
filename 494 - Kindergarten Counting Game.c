#include<stdio.h>

int main()
{
    int count=0,ch=0;

    char c;
     while ((c = getchar()) != EOF) {

    if (c == '\n') {
        printf("%d",count);
        putchar(c);
        count=0;
        ch=0;

    } else  {
      if((c>='A' && c<='Z') || (c>='a' && c<='z'))
      {
          if(ch==0)
          {
              count++;
              ch=1;
          }
      }
      else
        ch=0;
    }

}
   return 0;
}
