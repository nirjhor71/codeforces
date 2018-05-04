#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1=" ",p;
    map<char,int>mp;
    int c=0,flag=0;
    cin>>s;
    int len= s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            mp[s[i]]=1;
             mp[s[i+1]]=1;
              mp[s[i+2]]=1;
              flag=1;
        }
        flag=0;

    }
     for(int i=0; i<len; i++)
     {
         if(flag=0)
         {
             cout<<s[i];
         }
         else
            continue;
     }




    }



