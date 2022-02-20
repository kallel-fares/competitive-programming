/*
 * Codeforces 1635A - Min Or Sum
 * Rating: 800 | Tags: bitmasks, greedy
 * Problem:    https://codeforces.com/problemset/problem/1635/A
 * Submission: https://codeforces.com/contest/1635/submission/147037595
 * Solved: 2022-02-20 (CONTESTANT)
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
    
    /*
     
     
     */
    
    testc
    {
        int n;
        cin>>n;

        //vector<int>vec(n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            
            ans|=a;
        }
        
        cout<<ans<<"\n";
        
        
        
    }
    
}
