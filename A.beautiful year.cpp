#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long yr,res=0,p,c=0;
    long long  a[10000],x;
    set<int>myset;
    cin>>yr;
    for(int i=yr+1;; i++)
    {
        myset.clear();
        int x=i;
        p=i;
        while(x>0)
        {
            res=x%10;
            x/=10;
            myset.insert(res);

        }
            if(myset.size()==4)
            {
                cout<<p<<endl;
                return 0;
            }
            else
                continue;


        p=0;
        x=0;
    }

}
