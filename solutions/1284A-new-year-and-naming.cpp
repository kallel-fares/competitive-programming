/*
 * Codeforces 1284A - New Year and Naming
 * Rating: 800 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1284/A
 * Submission: https://codeforces.com/contest/1284/submission/137771386
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
    
    int n,m;
    cin>>n>>m;
        
        
    vector<string> vec(n),vec1(m);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>vec1[i];
    }
    
    testc{
        int a;
        cin>>a;
        a--;
        
        cout<<vec[a%n]<<vec1[a%m]<<"\n";
    }
    
        
    
    
        
    
    
    
}
