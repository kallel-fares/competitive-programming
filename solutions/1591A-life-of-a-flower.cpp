/*
 * Codeforces 1591A - Life of a Flower
 * Rating: 800 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1591/A
 * Submission: https://codeforces.com/contest/1591/submission/138873807
 * Solved: 2021-12-12 (CONTESTANT)
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


queue<int> q;




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
        
        
        int ans=1;
        if(vec[0]==1)
            ans++;
        
        for(int i=1;i<n;i++)
        {
            if(vec[i-1])
            {
                if(vec[i])
                    ans+=5;
            }
            else
            {
                if(vec[i])
                {
                    ans++;
                }
                else
                {
                    ans=-1;
                    break;
                }
            }
            
        }
        
        
        cout<<ans<<"\n";
        
        
        
    }
    
    
    
    
    
}
