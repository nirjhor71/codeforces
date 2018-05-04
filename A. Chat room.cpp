#include<bits/stdc++.h>
using namespace std;
int main()
{
    string g="hello";
    string s;
    cin>>s;
    int a=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==g[a])
        {
            a++;
            c++;
        }

    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
