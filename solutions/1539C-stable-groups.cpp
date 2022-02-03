/*
 * Codeforces 1539C - Stable Groups
 * Rating: 1200 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1539/C
 * Submission: https://codeforces.com/contest/1539/submission/145073582
 * Solved: 2022-02-03 (PRACTICE)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
 
const int m=1e9+7;
 
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    
        ll n,k,x;
        cin>>n>>k>>x;
        
        vector<ll> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        sort(vec.begin(),vec.end());
        
        vector<ll> dis;
        
        for(int i=0;i<n-1;i++)
        {
            dis.pb(max(vec[i+1]-vec[i]-1,0LL)/x);
        }
    
    sort(dis.begin(), dis.end());
        
        ll ans=n;
        for(auto x:dis)
        {
            //cout<<x<<" ";
            if(k-x<0)
                break;
            
            k-=x;
            ans--;
        }
        
        cout<<ans<<"\n";
    
}
