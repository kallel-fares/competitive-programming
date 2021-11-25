/*
 * Codeforces 1611C - Polycarp Recovers the Permutation
 * Rating: 1000 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1611/C
 * Submission: https://codeforces.com/contest/1611/submission/136877198
 * Solved: 2021-11-25 (CONTESTANT)
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc{
        
        
        int n;
        cin>>n;
        
        vector<int> vec(n),aux;
        
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        if(vec[0]!=n && vec[n-1]!=n)
        {
            cout<<"-1\n";
            continue;
        }
        else
        {
            cout<<n<<" ";
            for(int i=n-1;i>=0;i--)
            {
                if(vec[i]!=n)
                    cout<<vec[i]<<" ";
            }
        }
        
        cout<<"\n";
    }
    

    
        
        
    
    
    
    
    
}
