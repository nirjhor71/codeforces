#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s1,s2;
    cin>>str>>s1;
   reverse(str.begin(),str.end());
   if(str==s1)
   {
       cout<<"YES"<<endl;

   }
   else
   {
       cout<<"NO"<<endl;
   }

}
