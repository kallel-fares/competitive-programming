/*
 * Codeforces 1604B - XOR Specia-LIS-t
 * Rating: 1100 | Tags: none
 * Problem:    https://codeforces.com/problemset/problem/1604/B
 * Submission: https://codeforces.com/contest/1604/submission/138422631
 * Solved: 2021-12-08 (VIRTUAL)
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


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
    
        if(n&1)
        {
            int v=0;
            for(int i=0;i<n-1;i++)
            {
                if(vec[i+1]<=vec[i])
                    v=1;
            }
            if(v)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        
        
        
    }
    
            
        
    
    
    
}
