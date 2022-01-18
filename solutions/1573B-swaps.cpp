/*
 * Codeforces 1573B - Swaps
 * Rating: 1400 | Tags: greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1573/B
 * Submission: https://codeforces.com/contest/1573/submission/143257037
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
       
        
        int n;
        cin>>n;
        
        vector<int> p(2*n+1),imp(2*n+1),freq(2*n+2);
        
        
        for(int i=0;i<n;i++)
        {
            cin>>imp[i];
            freq[imp[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        
        
        
        for(int i=3;i<=2*n;i=i+2)
        {
            freq[i]=min(freq[i],freq[i-2]);
            
        }
        
        int ans=1e9;
        
        
        //for(auto x:freq)
          //  cout<<x<<" ";
        
        for(int i=0;i<n;i++)
        {
            ans=min(ans,i+freq[p[i]-1]);
            
        }
        
        cout<<ans<<"\n";
    }
    
}
