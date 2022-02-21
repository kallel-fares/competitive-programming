/*
 * Codeforces 1535A - Fair Playoff
 * Rating: 800 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1535/A
 * Submission: https://codeforces.com/contest/1535/submission/147188864
 * Solved: 2022-02-21 (VIRTUAL)
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
        vector<int>vec(4),a;
        
        for(int i=0;i<4;i++)
            cin>>vec[i];
        
        
        a=vec;
        
        sort(a.begin(), a.end());
        
        
        
        if( ((max(vec[0],vec[1])==a[3] && min(vec[0],vec[1])==a[2])) || ((max(vec[2],vec[3])==a[3] && min(vec[2],vec[3])==a[2])))
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
        
        
        
    }
    
}
