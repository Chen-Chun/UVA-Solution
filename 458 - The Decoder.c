#include<stdio.h>

int main()
{

    char c;
     while ((c = getchar()) != EOF) {
    if (c == '\n') {
        putchar(c);
    } else  {
        c=c-7;
        printf("%c",c);
    }
}
   return 0;
}
