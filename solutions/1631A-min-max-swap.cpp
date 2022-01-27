/*
 * Codeforces 1631A - Min Max Swap
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1631/A
 * Submission: https://codeforces.com/contest/1631/submission/144175135
 * Solved: 2022-01-27 (CONTESTANT)
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
        int n;
        cin>>n;
        
        vector<ll> vec1(n),vec2(n);
        
        
        for(int i=0;i<n;i++)
        {
            cin>>vec1[i];
            
        }
        for(int i=0;i<n;i++)
        {
            cin>>vec2[i];
            
        }
        ll max1=0,max2=0;
        for(int i=0;i<n;i++)
        {
            if(vec1[i]>vec2[i])
            {
                max1=max(max1,vec1[i]);
                max2=max(max2,vec2[i]);
            }
            else
            {
                max1=max(max1,vec2[i]);
                max2=max(max2,vec1[i]);
                
            }
            
        }
        
        cout<<max1*max2<<"\n";
        
        
        
    }
        
        
     
}
