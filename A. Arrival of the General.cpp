#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,c2=0,b[100000],a[100000],c1=0;
    vector<int>v1;
    vector<int>v2;
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+tc);
    int choto,boro;
     for(int i=0; i<tc; i++)
     {
         if(a[0]==b[i])
         {
             choto=i+1;
             v1.push_back(choto);
             c1++;

         }
         sort(v1.begin(),v1.end());
         if(a[tc-1]==b[i])
         {
             boro=i+1;
             v2.push_back(boro);
             c2++;
         }
     }
     cout<<(tc-(v1[c1-1]))<<" "<<(v2[0]-1)<<endl;
       if((tc-(v1[c1-1]))==1&&((v2[0]-1))==1&&tc==2)
       {
           cout<<"1"<<endl;
       }
     else if((v1[c1-1])<(v2[0]))
     {
         cout<<(tc-(v1[c1-1]))+((v2[0]-1)-1)<<endl;
     }
     else
          cout<<((tc-(v1[c1-1]))+(v2[0]-1))<<endl;






}
