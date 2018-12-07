#include<stdio.h>
int main()
{
    int i,T,x,y,z,a_int;
    double each,A,A_dollar;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        each=(x+y)/3.0;
        A=x-each;
        if(A<0)
        {
            a_int=0;
        }
        else
        {
            A_dollar=(z*A)/each;
            a_int=A_dollar;
            if((A_dollar-a_int)>=0.9)
                a_int=a_int+1;
        }
        printf("%d\n",a_int);
    }

    return 0;
}
