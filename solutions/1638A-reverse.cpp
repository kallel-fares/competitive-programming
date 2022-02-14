/*
 * Codeforces 1638A - Reverse
 * Rating: 800 | Tags: constructive algorithms, greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1638/A
 * Submission: https://codeforces.com/contest/1638/submission/146365221
 * Solved: 2022-02-14 (CONTESTANT)
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
        
        int n;
        cin>>n;
        vector<int> vec(n);
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        int c=1;
        for(int i=0;i<n;i++)
        {
            if(c==vec[i])
            {
                c++;
            }
            else
            {
                int cnt=0;
                while(vec[i+cnt]!=c)
                {
                    cnt++;
                }
                
                reverse(vec.begin()+i, vec.begin()+i+cnt+1);
                break;
            }
            
        }
        
        for(auto x:vec)
            cout<<x<<" ";
        cout<<"\n";
        
        
        
        
        
    }
    
    
    
}
