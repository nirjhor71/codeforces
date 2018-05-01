#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,x,y,tru=0,bru=0,m,n;
    cin>>num;
    for(int j=4; j<=num; j+=2)
    {
        x=j;
        y=num-x;
        if(j==x)
        {
            for(int i=2; i<num; i++)
            {
                if(x%i==0&&i!=x)
                {
                    tru=1;
                }
                if(y%i==0&&i!=y)
                {
                    //cout<<y<<endl;
                    bru=1;
                }
            }
        }


        if(((x+y)==num)&&(tru==1)&&(bru==1))
        {
            cout<<x<<" "<<y<<endl;
            break;

        }
    }

}
