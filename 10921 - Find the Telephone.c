#include<stdio.h>
int main()
{
    int i;
    char C;
    while(scanf("%c",&C)!=EOF)
    {

            if(C=='A' || C=='B' || C=='C')
                printf("2");
           else if(C=='D' || C=='E' || C=='F')
                printf("3");
                else if(C=='G' || C=='H' || C=='I')
                  printf("4");
                else if(C=='J' || C=='K' || C=='L')
                  printf("5");
                else if(C=='M' || C=='N' || C=='O')
                  printf("6");
                else if(C=='P' || C=='Q' || C=='R' || C=='S')
                  printf("7");
                else if(C=='T' || C=='U' || C=='V')
                  printf("8");
                else if(C=='W' || C=='X' || C=='Y' || C=='Z')
                  printf("9");
                else
                    printf("%c",C);

        }
    return 0;
}
