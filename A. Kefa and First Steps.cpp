#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int b[10000000];
int main()
{
    long long tc,c=0,mx=0;
    cin>>tc;
    for(long long int i=0; i<tc; i++)
    {
        cin>>a[i];
    }
    for(long long int i=0; i<tc; i++)
    {

        if(a[i]<=a[i+1])
        {
            c++;

        }

        if(c>mx)
        {
            mx=c;
        }
        if(a[i]>a[i+1])
        {
            c=0;
        }



    }
    cout<<mx+1<<endl;

}
