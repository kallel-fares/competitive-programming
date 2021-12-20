/*
 * Codeforces 1538B - Friends and Candies
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1538/B
 * Submission: https://codeforces.com/contest/1538/submission/139999097
 * Solved: 2021-12-20 (VIRTUAL)
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
    
    testc{
       
        int n;
        cin>>n;
        vector<int> vec(n);
        
        ll s=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            s+=vec[i];
        }
            
        
        
        if(s%n)
        {
            cout<<"-1\n";
        }
        else
        {
            ll med=s/n,ans=0;
            
            for(int i=0;i<n;i++)
            {
                if(vec[i]>med)
                    ans++;
            }
            cout<<ans<<"\n";
        }
        
        
        
    }
    


}
