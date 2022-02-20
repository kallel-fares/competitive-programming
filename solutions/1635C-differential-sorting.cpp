/*
 * Codeforces 1635C - Differential Sorting
 * Rating: 1200 | Tags: constructive algorithms, greedy
 * Problem:    https://codeforces.com/problemset/problem/1635/C
 * Submission: https://codeforces.com/contest/1635/submission/147069065
 * Solved: 2022-02-20 (CONTESTANT)
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
        
        if(vec[n-2]>vec[n-1])
        {
            cout<<"-1\n";
            continue;
        }
        
        if(vec[n-2]-vec[n-1]<=vec[n-2])
        {
            cout<<n-2<<"\n";
            for(int i=1;i<=n-2;i++)
            {
                
                cout<<i<<" "<<n-1<<" "<<n<<"\n";
            }
        }
        else
        {
            int v=0;
            for(int i=0;i<n-2;i++)
            {
                if(vec[i+1]<vec[i])
                {
                    v=1;
                }
            }
            
            if(!v)
            {
                cout<<"0\n";
            }
            else
            {
                cout<<"-1\n";
            }
        }
        
        
        
        
        
        
        
    }
    
}
