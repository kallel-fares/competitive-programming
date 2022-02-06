/*
 * Codeforces 1634A - Reverse and Concatenate
 * Rating: 800 | Tags: greedy, strings
 * Problem:    https://codeforces.com/problemset/problem/1634/A
 * Submission: https://codeforces.com/contest/1634/submission/145481047
 * Solved: 2022-02-06 (VIRTUAL)
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
        int n,k;
        cin>>n>>k;
        
        string ch;
        cin>>ch;
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]!=ch[n-1-i])
                v=1;
        }
        
        if(!k || !v)
        {
            cout<<"1\n";
            continue;
        }
        cout<<"2\n";
        
        
        
    }
    
}
