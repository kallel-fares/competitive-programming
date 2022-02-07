/*
 * Codeforces 1634C - OKEA
 * Rating: 1000 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1634/C
 * Submission: https://codeforces.com/contest/1634/submission/145521454
 * Solved: 2022-02-07 (PRACTICE)
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
        
        vector<int> mark(n*k+1);
        
        if(k==1)
        {
            cout<<"YES\n";
            for(int i=1;i<=n*k;i++)
            {
                cout<<i<<"\n";
            }
            continue;
        }
        
        if(n&1)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            
            
            int j=0,cnt=0;
            for(int i=0;i<n/2;i++)
            {
                cnt=0;
                while( cnt<k )
                {
                    cout<<2*j+1<<" ";
                    j++;
                    cnt++;
                }
                
                cout<<"\n";
            }
            j=1;
            for(int i=0;i<n/2;i++)
            {
                cnt=0;
                while( cnt<k )
                {
                    cout<<2*j<<" ";
                    j++;
                    cnt++;
                }
                
                cout<<"\n";
            }
            
        }
        
        
    }
    
}
