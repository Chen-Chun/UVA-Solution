#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,double>m;
    set<string>s;
    int i,T;
    string species;
    double population=0;
    cin >>T;

    for(i=0;i<T;i++)
    {
        population=0;
        //getchar();
        getchar();
        while(std::getline(std::cin,species)){
        if(species.empty()) break;
        m[species]=m[species]++;
        population++;
        s.insert(species);

    }
    }
    population=100.00/population;
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(4);

    set<string> :: iterator it;
    for(it=s.begin();it!= s.end(); it++) {
        cout << *it << " "<< m[*it]*population<< endl;
    }


}
