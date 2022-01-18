/*
 * Codeforces 1625A - Ancient Civilization
 * Rating: 800 | Tags: bitmasks, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1625/A
 * Submission: https://codeforces.com/contest/1625/submission/143210973
 * Solved: 2022-01-18 (VIRTUAL)
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

 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
     testc
    {
        int n,k;
        cin>>n>>k;
        
        
        vector<ll> vec(n);
        
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
       
        for(ll i=k;i>=0;i--)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
                if(vec[j]&(1LL<<i))
                    s++;
            }
            
            if(s>n/2)
            {
                ans+=1LL<<i;
            }
        }
        
        cout<<ans<<"\n";
        
        
        
        
        
        
    }
    
}
