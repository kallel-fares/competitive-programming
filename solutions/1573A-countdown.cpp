/*
 * Codeforces 1573A - Countdown
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1573/A
 * Submission: https://codeforces.com/contest/1573/submission/143251747
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
        
        string ch;
        cin>>ch;
        
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(ch[i]-'0')
            {
                ans+=ch[i]-'0'+1;
            }
            
        }
        
        
        if(ch[n-1]-'0')
        {
            ans+=ch[n-1]-'0';
        }
        
        cout<<ans<<"\n";
        
        
        
        
        
        
    }
    
}
