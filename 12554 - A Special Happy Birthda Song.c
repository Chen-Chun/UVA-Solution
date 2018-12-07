#include<stdio.h>
int main()
{
    int n,i,m,k,s;
    char hbd[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday",
                        "to","you"};
    char name[100][100];

    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
   if(n<16)
    s=16;
   else if(n%16==0)
    s=n;
   else
    s=((n/16)*16)+16;
       m=0;
       k=0;
       for(i=0;i<s;i++)
       {

           printf("%s: %s\n",name[m],hbd[k]);
           m++;
           k++;
           if(m==n)
            m=0;
           if(k==16)
            k=0;
       }

    return 0;

}
