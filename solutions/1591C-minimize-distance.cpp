/*
 * Codeforces 1591C - Minimize Distance
 * Rating: 1300 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1591/C
 * Submission: https://codeforces.com/contest/1591/submission/139006769
 * Solved: 2021-12-13 (PRACTICE)
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


queue<int> q;




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    testc
    {
        
        ll n,k;
        cin>>n>>k;
        vector<ll> neg,pos;
        
        
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a<0)
                neg.pb(abs(a));
            if(a>0)
                pos.pb(a);
        }
        
        
        sort(neg.begin(), neg.end());
        
        sort(pos.begin(), pos.end());
        ll ans=0;
        int j=(int)neg.size()-1,i=(int)pos.size()-1;
        while(j>=0)
        {
            ans+=neg[j]*2;
            j-=k;
        }
        
        while(i>=0)
        {
            ans+=pos[i]*2;
            i-=k;
        }
        
        if(!neg.size())
            neg.pb(0);
        
        if(!pos.size())
            pos.pb(0);
        cout<<ans-max(pos[(int)pos.size()-1],neg[(int)neg.size()-1])<<"\n";
    }
    
    
    
    
    
}
