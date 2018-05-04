#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n,c=1,a;
	 cin>>n;
	 int b=n;
	 std::vector<int> v(n+1);
	 while(n--)
	 {
	 	cin>>a;
	 	v[a]=c;
	 	c++;
	 }
	 for(int i=1;i<=b;i++)
	 {
	 	cout<<v[i]<<" ";
	 }
	 cout<<endl;
}