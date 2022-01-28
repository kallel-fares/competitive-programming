/*
 * Codeforces 1631C - And Matching
 * Rating: 1500 | Tags: bitmasks, constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1631/C
 * Submission: https://codeforces.com/contest/1631/submission/144343378
 * Solved: 2022-01-28 (PRACTICE)
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

 
 
 
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        int n,k;
        cin>>n>>k;
        
        
        if(n==4 && k==3)
        {
            cout<<"-1\n";
            continue;
        }
        
        if(k==n-1)
        {
            //int ban1=k,ban2=n-1-k;
            cout<<k<<" "<<k-1<<"\n";
            cout<<"1 "<<k-2<<"\n";
            cout<<"0 2\n";
            for(int i=3;i<n/2;i++)
            {
                cout<<i<<" "<<n-1-i<<"\n";
            }
            
        }
        else
        {
            int ban1=k,ban2=n-1-k;
            cout<<n-1<<" "<<k<<"\n";
            if(k!=0)
                cout<<0<<" "<<n-1-k<<"\n";
            for(int i=1;i<n/2;i++)
            {
                if(i==ban1 || i==ban2)
                {
                    continue;
                }
                cout<<i<<" "<<n-1-i<<"\n";
            }
            
        }
        
        
    }
        
        
     
}
