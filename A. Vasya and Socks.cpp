#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,x,y;
    set<int>ms;
    cin>>n>>m;
    x=n;
    y=m;
    while(m<=n)
    {
        p=n%m;
        ms.insert(p);
        m+=m;


    }
    if(x==y) cout<<x+1<<endl;
    //else if(x<y) cout<<x<<endl;
    else cout<<ms.size()<<endl;
}
