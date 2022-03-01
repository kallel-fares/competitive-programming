/*
 * Codeforces 1388B - Captain Flint and a Long Voyage
 * Rating: 1000 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1388/B
 * Submission: https://codeforces.com/contest/1388/submission/148065491
 * Solved: 2022-03-01 (VIRTUAL)
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
//        int n;
//        cin>>n;
//
//
//        vector<int> vec(n);
//
//        for(int i=0;i<n;i++)
//            cin>>vec[i];
        
        int n,ei=0;
        cin>>n;
        
        ei=n/4+min(n%4,1);
        for(int i=0;i<n-ei;i++)
            cout<<"9";
        for(int i=0;i<ei;i++)
            cout<<"8";
        
        cout<<"\n";
        
        
    }
    
    
    
    
    
    
    
}
