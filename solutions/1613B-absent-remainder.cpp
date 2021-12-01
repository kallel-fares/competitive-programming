/*
 * Codeforces 1613B - Absent Remainder
 * Rating: 1000 | Tags: greedy, implementation, sortings
 * Problem:    https://codeforces.com/problemset/problem/1613/B
 * Submission: https://codeforces.com/contest/1613/submission/137663727
 * Solved: 2021-12-01 (CONTESTANT)
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


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    testc
    {
            
        int n;
        cin>>n;
        
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        sort(vec.begin(), vec.end());
        
        
        for(int i=1;i<=n/2;i++)
        {
            cout<<vec[i]<<" "<<vec[0]<<"\n";
        }
        
    }
        
    
    
    
}
