#include<stdio.h>
#include<string.h>
#include<math.h>
char a[10000],grid[10000][10000];
int main()
{
    int T,i,len,row,col,l,d;
    double sq;

    scanf("%d",&T);
    getchar();

    for(i=0;i<T;i++)
    {
        gets(a);
        len=strlen(a);
        sq=sqrt(len);
        d=sqrt(len);

        if(d!=sq || d==1)
        printf("INVALID\n");
        else
        {
            l=0;
            for(row=0;row<d;row++)
            {
                for(col=0;col<d;col++)
                {
                    grid[row][col]=a[l];
                    l++;
                }

            }
            for(row=0;row<d;row++)
            {
                for(col=0;col<d;col++)
                {
                    printf("%c",grid[col][row]);


                }
            }

            printf("\n");



        }


    }
    return 0;
}
