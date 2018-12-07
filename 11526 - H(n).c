#include<stdio.h>

long long H(int n)
{
long long res = 0;
 int i;
       for(i= 1; i <= n; i=i+1 ){
           res = (res + n/i);
              }
         return res;

}
int main()
{
    int i,T,n,ans;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        ans=H(n);
        printf("%d\n",ans);
    }
    return 0;
}

