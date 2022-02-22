/*
 * Codeforces 1644A - Doors and Keys
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1644/A
 * Submission: https://codeforces.com/contest/1644/submission/147285329
 * Solved: 2022-02-22 (CONTESTANT)
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
    
    /*
     
     
     */
    
    testc
    {
        
//        int n;
//        cin>>n;
//        vector<int>vec(n);
//        for(int i=0;i<n;i++)
//        {
//            cin>>vec[i];
//        }
        
        
        string ch;
        cin>>ch;
        
        int r,g,b,v=0;
        r=g=b=0;
        
        for(int i=0;i<6;i++)
        {
            if(ch[i]=='r')
            {
                r++;
                continue;
            }
            
            if(ch[i]=='g')
            {
                g++;
                continue;
            }
            if(ch[i]=='b')
            {
                b++;
                continue;
            }
            
            
            if(ch[i]=='R' && !r)
            {
                v=1;
            }
            
            if(ch[i]=='G' && !g)
            {
                v=1;
            }
            if(ch[i]=='B' && !b)
            {
                v=1;
            }
            
            
        }
        
        if(v)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
        
    }
    
}
