#include<bits/stdc++.h>
using namespace std;
int flag;
string S,T;

void check(int f)
{
    long long int t;
    flag=1;
    for( t=1;t<T.length();t++,f++)
        {
                if(T[t]!=S[f])
                {
                    flag=2;

                }
        }
}
int main()

{
  long long int k,q,i,j,f,s,t;

    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>S;
        cin>>q;
        for(j=0;j<q;j++)
        {
            cin>>T;
            f=0;
            flag=0;
            for( s=0;s<S.length()-T.length()+1;s++)
            {

                    if(T[0]=S[s])
                    {
                        flag=1;
                        f=s+1;
                        check(f);
                        if(flag==1)
                            break;

                    }

            }

            if(flag==1)
                cout<<"y"<<endl;
            else if(flag==2 || flag==0) cout<<"n"<<endl;
        }
    }
    return 0;
}
