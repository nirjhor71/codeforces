#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,c1=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            c++;
        }
         if(s[i]>='A'&&s[i]<='Z')
        {
            c1++;
        }
    }

        for(int i=0;i<s.size();i++)
        {
            if(c>c1||c==c1)
            {
                s[i]=tolower(s[i]);
                cout<<s[i];
            }
            else
            {
                s[i]=toupper(s[i]);
                cout<<s[i];
            }

        }
        cout<<endl;

}
