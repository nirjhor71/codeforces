
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double count=0;
    string g,c;
    cin>>c;
    cin>>g;
    for (int i=0; i<c.size(); i++)
    {
        c[i]=tolower(c[i]);
        g[i]=tolower(g[i]);
    }
    cout<<c.compare(g)<<endl;
    return 0;
}
