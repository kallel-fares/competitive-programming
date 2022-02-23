/*
 * Codeforces 1642B - Power Walking
 * Rating: 900 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1642/B
 * Submission: https://codeforces.com/contest/1642/submission/147425569
 * Solved: 2022-02-23 (CONTESTANT)
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
        
        int n;
        cin>>n;

        map<int, int> m;
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(!m[a])
                cnt++;
            m[a]++;
        }
        
        for(int i=1;i<=cnt;i++)
        {
            cout<<cnt<<" ";
        }
        
        for(int i=cnt+1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
    }
    
}
