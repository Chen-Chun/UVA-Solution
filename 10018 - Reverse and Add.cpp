#include<bits/stdc++.h>
using namespace std;

int check_palindrome(long long int s)
{

    //cout<<"hi";

    long long int res=s,rem,c=0,pal[100000],cpy[100000];
    while(res!=0)
    {
        rem=res%10;
        res=res/10;
        pal[c]=rem;
        c++;
    }
    long long int i,j=0,flag=0;
    for(i=c-1,j=0;i>=0;i--,j++)
    {
        cpy[i]=pal[j];
        if(cpy[i] != pal[i])
        {
            flag=1;
            break;
        }

    }
    /*cpy=pal;
    cout<<"oooo"<<endl;
    cout<<cpy<<endl;
    reverse(pal.begin(), pal.end());
    cout<<pal<<endl;
    if(cpy.compare(pal) == 0)
    */if(flag==1)
        return 0;
      else return 1;

}

long long int power(long long int p)
{
    long long int i,mul=1;
    for(i=0;i<p;i++)
    {
        mul=mul*10;
    }
    return mul;
}

long long int reverse_add(long long int s)
{
//cout<<"he"<<endl;
    long long int res,rem,c=0,sum=0,p=0,rev[100000],i;

    res=s;
    while(res!=0)
    {
        rem=res%10;
        res=res/10;
        rev[c]=rem;
        c++;

    }
    sum=0;
    p=c-1;
    for(i=0;i<c;i++)
    {
        //cout<<rev[i]<<endl;
        //cout<<pow(10,p)<<endl;
        sum=sum+(rev[i]*power(p));
        p--;
         //cout<<sum<<endl;
    }
    /*for(i=c-1,p=0;i>=0;i--,p++)
    {
        cout<<rev[i]<<endl;
        cout<<pow(10,p)<<endl;
        sum=sum+(rev[i]*(pow(10,p)));
        cout<<sum<<endl;
    }
    */
   // cout<<s+sum<<endl;
     return s+sum;
}
int main()
{
int N,P[10000];
long long int sum,i,cnt=0;
int check;
cin>>N;
for(i=0;i<N;i++)
{
    cin>>P[i];
    sum=P[i];
    cnt=0;
    //cout<<sum;

    //cout<<" "<<check;
    while(check_palindrome(sum)!=1)
    {
        cnt++;
        sum=reverse_add(sum);
        //if(cnt==4) break;

    }
    cout<<cnt<<" "<<sum<<endl;
}
return 0;


}
