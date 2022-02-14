/*
 * Codeforces 1638B - Odd Swap Sort
 * Rating: 1100 | Tags: data structures, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1638/B
 * Submission: https://codeforces.com/contest/1638/submission/146373367
 * Solved: 2022-02-14 (CONTESTANT)
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
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        int sodd=0,seven=0,v=0;
        
        for(int i=0;i<n;i++)
        {
            if(vec[i]&1)
            {
                if(sodd>vec[i])
                    v=1;
                else
                    sodd=vec[i];
            }
            else
            {
                if(seven>vec[i])
                    v=1;
                else
                    seven=vec[i];
            }
        }
        
        if(v)
        {
            cout<<"No\n";
        }
        else
            cout<<"Yes\n";
        
    }
    
    
    
}
