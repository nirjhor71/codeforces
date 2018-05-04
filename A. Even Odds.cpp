#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    long long int p;
    long long int n,k,x=1,y;
    cin>>n>>k;
    for(long long int i=1; i<=n; i+=2)
    {
        a[x]=i;
        x++;
    }
    for(long long int j=2; j<=n; j+=2)
    {
        a[x]=j;
        x++;
    }
    cout<<a[k]<<endl;

}
