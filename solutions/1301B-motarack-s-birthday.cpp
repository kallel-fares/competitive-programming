/*
 * Codeforces 1301B - Motarack's Birthday
 * Rating: 1500 | Tags: binary search, greedy, ternary search
 * Problem:    https://codeforces.com/problemset/problem/1301/B
 * Submission: https://codeforces.com/contest/1301/submission/134983926
 * Solved: 2021-11-11 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 



int main ()
{
    testc
    {
        
    
        ll ans2=0;
        int n;
        cin>>n;
        vector<ll> vec(n);
        set<ll> se;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n-1;i++)
        {
            
            if (vec[i]==-1 && vec[i+1]!=-1) {
                se.insert(vec[i+1]);
            }
            else if (vec[i]!=-1 && vec[i+1]==-1) {
                se.insert(vec[i]);
            }
            else
            {
                ans2=max(ans2, abs(vec[i]-vec[i+1]));
            }
        }
        
        
        if(se.size()==0)
        {
            cout<<"0 0\n";
            continue;
        }
            
        
        ll ans=(*se.rbegin()+*se.begin())/2;
       
        cout<<max(abs(*se.rbegin()-ans),max(ans2,abs(*se.begin()-ans)))<<" "<<ans<<"\n";
        
        
    }
 
}
