/*
 * Codeforces 1574C - Slay the Dragon
 * Rating: 1300 | Tags: binary search, greedy, sortings, ternary search
 * Problem:    https://codeforces.com/problemset/problem/1574/C
 * Submission: https://codeforces.com/contest/1574/submission/136056736
 * Solved: 2021-11-18 (VIRTUAL)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
 
    int n;
    cin>>n;
    vector<ll> vec(n);
    
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    sort(vec.begin(), vec.end() );
        
    
    testc{
        
        ll x,y;
        cin>>x>>y;
        
        ll ind=upper_bound(vec.begin(), vec.end(), x )-vec.begin();
        ind=max(ind-1,0LL);
        //cout<<vec[ind]<<" ";
        
        cout<<min(max(y-(sum-vec[ind]),0LL)+max(x-vec[ind],0LL),
                  max(y-(sum-vec[min(ind+1,(ll)n-1)]),0LL)+max(x-vec[min(ind+1,(ll)n-1)],0LL))<<"\n";
        
        
        
        
    }
    
    
    
}
