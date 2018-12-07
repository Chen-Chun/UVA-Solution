#include<stdio.h>
int main()
{
    int flag=0,i;
    char ch;
    while(scanf("%c",&ch)!=EOF){
            if(flag==0) {
                if(ch=='"') {
                ch=96;
                flag=1;
                printf("%c",96);

        }
            }
        else if(flag==1) {
             if(ch=='"') {
                ch=39;
                flag=0;
                printf("%c",39);

        }
        }
            printf("%c",ch);

        }

    return 0;
}
