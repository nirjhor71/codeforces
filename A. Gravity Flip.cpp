#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,tc;
    vector<int>v1;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    for(int j=0;j<v1.size();j++)
    {
        cout<<v1[j]<<" ";
    }
    cout<<endl;
    return 0;

}
