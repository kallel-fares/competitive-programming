/*
 * Codeforces 1624C - Division by Two and Permutation
 * Rating: 1100 | Tags: constructive algorithms, flows, graph matchings, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1624/C
 * Submission: https://codeforces.com/contest/1624/submission/142231730
 * Solved: 2022-01-10 (CONTESTANT)
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

 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc{
        
        int n;
        cin>>n;
        
        vector<int> vec(n+1);
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            while(a>n)
            {
                a/=2;
            }
            
            vec[a]++;
        }
        
        
        //for(auto x:vec)
          //  cout<<x<<" ";
        
        int v=0;
        for(int i=n;i>1;i--)
        {
            if(vec[i]==0)
            {
                v=1;
                break;
            }
            else
            {
                while(vec[i]>1)
                {
                    vec[i]--;
                    vec[i/2]++;
                }
            }
            
            
            
        }
        
        
        
        
        if(v)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        
        
        
    }
    
}
