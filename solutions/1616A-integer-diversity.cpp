/*
 * Codeforces 1616A - Integer Diversity
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1616/A
 * Submission: https://codeforces.com/contest/1616/submission/141068589
 * Solved: 2021-12-29 (CONTESTANT)
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
    
   
    
    testc{
        int n;
        cin>>n;
        
        map<int, int> freq;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            freq[abs(a)]++;
        }
        
        for(auto x:freq)
        {
            if(x.first==0)
            {
                ans++;
                continue;
            }
            ans+=min(x.second,2);
        }
        cout<<ans<<"\n";
    }
}
