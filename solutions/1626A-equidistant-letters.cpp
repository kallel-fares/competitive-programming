/*
 * Codeforces 1626A - Equidistant Letters
 * Rating: 800 | Tags: constructive algorithms, sortings
 * Problem:    https://codeforces.com/problemset/problem/1626/A
 * Submission: https://codeforces.com/contest/1626/submission/142972475
 * Solved: 2022-01-16 (CONTESTANT)
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
    
    
    
     testc
    {
        string ch;
        cin>>ch;
        
        
        vector<int> freq(200);
        for(int i=0;i<ch.size();i++)
        {
            freq[ch[i]-'a']++;
        }
        
        string ans="";
        
        
        for(int i=0;i<200;i++)
        {
            if(freq[i]==1)
            {
                ans+=char('a'+i);
                freq[i]--;
            }
        }
        
        for(int i=0;i<200;i++)
        {
            if(freq[i])
            {
                ans+=char('a'+i);
                freq[i]--;
            }
        }
        
        for(int i=0;i<200;i++)
        {
            if(freq[i])
            {
                ans+=char('a'+i);
                freq[i]--;
            }
        }
        
        cout<<ans<<"\n";
        
        
    }
    
}
