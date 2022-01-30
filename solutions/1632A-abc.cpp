/*
 * Codeforces 1632A - ABC
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1632/A
 * Submission: https://codeforces.com/contest/1632/submission/144520005
 * Solved: 2022-01-30 (CONTESTANT)
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
        
        if(n==1 || (n==2 && ch[0]!=ch[n-1]))
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
        
    }
    
     
}
