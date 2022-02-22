/*
 * Codeforces 1644B - Anti-Fibonacci Permutation
 * Rating: 800 | Tags: brute force, constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1644/B
 * Submission: https://codeforces.com/contest/1644/submission/147313550
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
        
        int n;
        cin>>n;
        
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=2+i;j<=n;j++)
            {
                cout<<j<<" "; 
            }
            
            for(int j=2;j<2+i;j++)
            {
                
                cout<<j<<" ";
            }
            
            cout<<"1\n";
        }
        
        cout<<1<<" "; 
        for(int i=n;i>=2;i--)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
    }
    
}
