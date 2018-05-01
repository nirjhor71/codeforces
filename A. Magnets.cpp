#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=0,i=0,a;
    vector<char>v1;
    cin>>tc;

    for(int i=0; i<tc; i++)
    {
        cin>>a;
        v1.push_back(a);
            if(i>0)
            {
                if(v1[i]!=v1[i-1])
                    c++;
            }

    }
   //cout<< v1.size()<<endl;
     cout<<c+1<<endl;
}
