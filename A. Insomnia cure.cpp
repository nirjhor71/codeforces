#include <iostream>
#include <cstdio>
#include<cstdlib>
#include <string>
using namespace std;

int main()
{
    int i,k,l,m,n,d;
    int count=0;
    cin>>k>>l>>m>>n>>d;
    for(i=1; i<=d; i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            count++;
    }
    cout<<count<<endl;

    return 0;
}

