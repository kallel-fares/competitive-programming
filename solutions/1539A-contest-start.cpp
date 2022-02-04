/*
 * Codeforces 1539A - Contest Start
 * Rating: 1000 | Tags: combinatorics, geometry, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1539/A
 * Submission: https://codeforces.com/contest/1539/submission/145082396
 * Solved: 2022-02-04 (PRACTICE)
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
    
    
    
    testc
    {
        ll n,x,t;
        cin>>n>>x>>t;
        
        ll l=min(t/x,n-1);
        cout<<l*max(n-l-1,0LL)+(l*(l+1))/2<<"\n";
        
    }
    
}
/*
 
 0  1  2  3  4  5
 
 
 */
