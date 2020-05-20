#include<bits/stdc++.h>
using namespace  std ;
typedef long long  ll;
typedef pair<ll, ll> Pll;
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define rad(X) cout << (X) << endl
#define ASH(X) cout << (X) << " "
#define debug(x) cout << #x << " " << x << endl;
#define debug2(x,y) cout << #x << " " << x << " " << #y << " " << y << endl;
#define FOR(I,A,B) for(ll I = (A); I <= (B); I++)
#define cir(I,B,A) for(ll I = (A); I >=(B); I--)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define SORT(c) (sort(c.begin(),c.end()))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define CASES int ___T; cin >> ___T; for(int cs=1;cs<=___T;cs++)
#define FAST()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll fx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll fy[] = {0, 1, 1, 1, 0, -1, -1, -1};
vector<ll>a,b,c;
map<ll,ll>m1,m2,m3;

/************************************************/

void Execute()
{   ll N,NB,VAL,A,B,C,G,INC,DEC,L,R,D;
    cin >> N;
    ll ar[N];
    ll mx=-1e9;

    FOR(i,1,N)
    {   cin >> R;
        m1[R]++;
        mx=max(mx,m1[R]);
        if(m1[R]==2)
            a.PB(R);
        else
            b.PB(R);
    }
    SORT(a);
    SORT(b);

    if(mx>=3)
        cout<<"NO"<<endl;

    else
    {   cout<<"YES"<<endl;

        if(mx==1)
        {   cout<<0<<endl;
            cout<<endl;
            cout<<b.size()<<endl;
            if(a.size()>0)
                for(ll i=a.size()-1; i>=0; i--)
                {   std::cout << a[i]<<" ";
                }
            if(b.size()>0)
                for(ll i=b.size()-1; i>=0; i--)
                {   std::cout << b[i]<<" ";
                }
            cout<<endl;

        }
        else
        {   cout<<a.size()<<"\n";
            FOR(i,0,a.size()-1)
            {   std::cout << a[i]<<" ";
            }
            cout<<endl;
            cout<<b.size()<<endl;
            for(ll i=b.size()-1; i>=0; i--)
            {   std::cout << b[i]<<" ";
            }
            cout<<endl;
        }
    }




}

int32_t main()
{   FAST();
    Execute();

}
