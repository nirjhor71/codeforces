#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,a[1000],c=0,c1=0,p;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            c++;

        }
         if(a[i]%2!=0)
        {
            c1++;
        }
    }
    for(int i=0;i<tc;i++)
    {
        if(c==1)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
            }
        }
        if(c1==1)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
            }
        }
    }


}
