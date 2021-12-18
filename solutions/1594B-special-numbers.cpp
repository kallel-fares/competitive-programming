/*
 * Codeforces 1594B - Special Numbers
 * Rating: 1100 | Tags: bitmasks, math
 * Problem:    https://codeforces.com/problemset/problem/1594/B
 * Submission: https://codeforces.com/contest/1594/submission/139843346
 * Solved: 2021-12-18 (VIRTUAL)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;


const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};



const int m=1e9+7;

ll pew(ll a,ll b)
{
    a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    
    
}



queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        ll n,k;
        cin>>n>>k;
        
        ll i=0;
        ll ans=0;
        while((1LL<<i)<=k)
        {
            if(k&(1LL<<i))
            {
                //cout<<i<<" ";
                ans=(ans+pew(n,i))%m;
            }
            i++;
        }
        
        
        
        cout<<ans<<"\n";
    }
    


}
