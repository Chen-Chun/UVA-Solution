#include<stdio.h>
int main()
{
    int m,n,x,y,i,t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0)
            break;
        scanf("%d %d",&n,&m);
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&x,&y);
            if(x==n ||y ==m)
                printf("divisa\n");
            else if(x>n && y>m)
                printf("NE\n");
            else if(x>n && y<m)
                printf("SE\n");
            else if(x<n && y<m)
                printf("SO\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
