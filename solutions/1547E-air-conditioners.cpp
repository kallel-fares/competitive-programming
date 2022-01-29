/*
 * Codeforces 1547E - Air Conditioners
 * Rating: 1500 | Tags: data structures, dp, implementation, shortest paths, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1547/E
 * Submission: https://codeforces.com/contest/1547/submission/144414826
 * Solved: 2022-01-29 (PRACTICE)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
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
        
        vector<int>ans(n+1,2e9+1);
        
        
        
        vector<int> vec(n);
        
        for(int i=0;i<k;i++)
        {
            cin>>vec[i];
        }
        //cout<<"ad";
        for(int i=0;i<k;i++)
        {
            int a;
            cin>>a;
            ans[vec[i]]=a;
        }
        
        int mini=2e9+3;
        for(int i=1;i<=n;i++)
        {
            mini=min(ans[i],mini+1);
            ans[i]=mini;
        }
        
        
        mini=2e9+3;
        for(int i=n;i>=1;i--)
        {
            mini=min(ans[i],mini+1);
            ans[i]=mini;
        }
        
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
        
        
     
}
