/*
 * Codeforces 1566B - MIN-MEX Cut
 * Rating: 800 | Tags: bitmasks, constructive algorithms, dp, greedy
 * Problem:    https://codeforces.com/problemset/problem/1566/B
 * Submission: https://codeforces.com/contest/1566/submission/136597355
 * Solved: 2021-11-23 (VIRTUAL)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc
    {
        
        string ch;
        cin>>ch;
        
        ch+='4';
        int i=0,ans=0;
        
        while(i<ch.size()-1)
        {
            
            while(ch[i]==ch[i+1])
            {
                i++;
            }
            if(ch[i]=='0')
                ans++;
            i++;
        }
        
        
        cout<<min(2,ans)<<"\n";
        
        
        
        
        
        
    }
    
    
    
    
}
