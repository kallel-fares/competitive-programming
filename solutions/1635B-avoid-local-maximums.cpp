/*
 * Codeforces 1635B - Avoid Local Maximums
 * Rating: 800 | Tags: greedy
 * Problem:    https://codeforces.com/problemset/problem/1635/B
 * Submission: https://codeforces.com/contest/1635/submission/147102116
 * Solved: 2022-02-20 (PRACTICE)
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
        int n;
        cin>>n;
 
        vector<int>vec(n);
        //ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            
        }
        
        
        vector<int> ans;
        for(int i=1;i<n-1;i++)
        {
            if(vec[i]>vec[i-1] && vec[i]>vec[i+1])
                ans.pb(i);
            
        }
        
        int cnt=0;
        for(int i=0;i<ans.size();i++)
        {
            
            if( i<ans.size()-1 && ans[i]+2==ans[i+1])
            {
                vec[ans[i]+1]=max(vec[ans[i]],vec[ans[i+1]]);
                i++;
            }
            else
            {
                vec[ans[i]+1]=vec[ans[i]];
            }
            
            cnt++;
            
            
            
        }
        
        cout<<cnt<<"\n";
        for(auto x:vec)
            cout<<x<<" ";
        cout<<"\n";
        
        
        
        
        
    }
    
}
