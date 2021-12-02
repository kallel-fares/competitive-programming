/*
 * Codeforces 1105A - Salem and Sticks 
 * Rating: 1100 | Tags: brute force, implementation
 * Problem:    https://codeforces.com/problemset/problem/1105/A
 * Submission: https://codeforces.com/contest/1105/submission/137778691
 * Solved: 2021-12-02 (PRACTICE)
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




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    vector<ll> vec(n);
    
    for(int i=0;i<n;i++)
        cin>>vec[i];
    
    
    
    
    ll ans=1e8,t=0;
    for(int i=1;i<=100;i++)
    {
        int aux=0;
        for(int j=0;j<n;j++)
        {
            aux+=max(abs(vec[j]-i)-1,0LL);
        }
        if(aux<ans)
        {
            ans=aux;
            t=i;
            
        }
    }
    cout<<t<<" "<<ans;
    
        
    
    
    
}
