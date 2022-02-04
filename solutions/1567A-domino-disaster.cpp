/*
 * Codeforces 1567A - Domino Disaster
 * Rating: 800 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1567/A
 * Submission: https://codeforces.com/contest/1567/submission/145169863
 * Solved: 2022-02-04 (VIRTUAL)
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
        int n;
        cin>>n;
        
        string ch;
        cin>>ch;
        //ch+='X';
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='L')
            {
                ans+='L';
                ans+='R';
                continue;
            }
            
            if(ch[i]=='R')
            {
                continue;
            }
            if(ch[i]=='U')
            {
                ans+='D';
                continue;
            }
            if(ch[i]=='D')
            {
                ans+='U';
                continue;
            }
            
            
        }
        cout<<ans<<"\n";
    }
    
}
/*
 
 0  1  2  3  4  5
 
 
 */
