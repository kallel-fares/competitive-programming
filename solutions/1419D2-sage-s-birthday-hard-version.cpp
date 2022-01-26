/*
 * Codeforces 1419D2 - Sage's Birthday (hard version)
 * Rating: 1500 | Tags: binary search, brute force, constructive algorithms, greedy, sortings, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1419/D2
 * Submission: https://codeforces.com/contest/1419/submission/144108285
 * Solved: 2022-01-26 (PRACTICE)
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
    
    
    int n;
    cin>>n;
    vector<int> vec(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    if(n==1)
    {
        cout<<"0\n";
        cout<<vec[0]<<"\n";
        return 0;
    }
    sort(vec.begin(), vec.end());
    
    /*for(auto x:vec)
    {
        cout<<x<<" ";
    }
    cout<<"\n";*/
    
    int j=n/2,val=0,prev=0;
    vector<int> ans;
    for(int i=0;i<n/2;i++)
    {
        while(vec[i]==vec[j] && j<n)
        {
            ans.pb(vec[j]);
            j++;
        }
        
        if(j==n)
        {
            ans.pb(vec[i]);
            
        }
        else
        {
            if(prev>vec[i])
            {
                ans.pb(vec[i]);
                ans.pb(vec[j]);
                prev=vec[j];
                val++;
                j++;
                
                continue;
            }
            ans.pb(vec[j]);
            
            prev=vec[i];
            j++;
            ans.pb(vec[i]);
            if(j<n)
            {
                ans.pb(vec[j]);
                prev=vec[j];
                val++;
                j++;
            
                
            }
        }
        
        
    }
    
    cout<<val<<"\n";
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
        
        
    
        
        
     
}
