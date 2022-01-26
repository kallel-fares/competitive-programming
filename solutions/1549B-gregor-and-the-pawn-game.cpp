/*
 * Codeforces 1549B - Gregor and the Pawn Game
 * Rating: 800 | Tags: dfs and similar, dp, flows, graph matchings, graphs, greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1549/B
 * Submission: https://codeforces.com/contest/1549/submission/144056961
 * Solved: 2022-01-26 (VIRTUAL)
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
        
        int n;
        cin>>n;
        string ch1,ch2;
        
        cin>>ch1>>ch2;
        
        ch1='0'+ch1+'0';
        ch2='0'+ch2+'0';
        
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(ch2[i]=='0')
                continue;
            
            
            if(ch1[i]=='0')
            {
                ans++;
                continue;
            }
            
            
            if(ch1[i]!='0')
            {
                if(ch1[i-1]=='1')
                {
                    ans++;
                    continue;
                }
                if(ch1[i+1]=='1')
                {
                    ans++;
                    ch1[i+1]='2';
                    continue;
                }
            }
            
            
        }
        cout<<ans<<"\n";
        
    }
        
        
     
}
