/*
 * Codeforces 1615B - And It's Non-Zero
 * Rating: 1300 | Tags: bitmasks, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1615/B
 * Submission: https://codeforces.com/contest/1615/submission/146054533
 * Solved: 2022-02-12 (PRACTICE)
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
    
    
    
    vector<vector<int>> pre(2e5 +2 , vector<int>(20));
    for(int i=1;i<=2e5+1;i++)
    {
        
        for(int j=0;j<=19;j++)
        {
            if(!((i-1)&(1<<j)))
            {
                pre[i][j]++;
                
            }
            pre[i][j]+=pre[i-1][j];
            //cout<<
            
        }
        //cout<<"\n";
    }
    
    
    
    testc
    {
        int l,r;
        cin>>l>>r;
        
        int ans=2e6;
        for(int j=0;j<=19;j++)
        {
            ans=min(pre[r+1][j]-pre[l][j],ans);
            
        }
        cout<<ans<<"\n";
    }
    
    
}
