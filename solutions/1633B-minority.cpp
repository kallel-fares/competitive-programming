/*
 * Codeforces 1633B - Minority
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1633/B
 * Submission: https://codeforces.com/contest/1633/submission/144685715
 * Solved: 2022-01-31 (CONTESTANT)
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
        string ch;
        cin>>ch;
        
        int z=0,o=0,ans=0;
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i]=='0')
            {
                z++;
            }
            else
                o++;
            
            
            
            if(z!=o)
                ans=max(ans,min(z,o));
            
        }
        cout<<ans<<"\n";
    }
    
     
}
