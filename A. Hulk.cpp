#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n)!=EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i&1)
                printf("I hate ");
                else
                printf("I love ");
            
            if (i == n) 
                printf("it\n");
                else 
                printf("that ");
            
        }
    }
    return 0;
}