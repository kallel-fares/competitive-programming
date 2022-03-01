/*
 * Codeforces 1388A - Captain Flint and Crew Recruitment
 * Rating: 800 | Tags: brute force, greedy, math, number theory
 * Problem:    https://codeforces.com/problemset/problem/1388/A
 * Submission: https://codeforces.com/contest/1388/submission/148065076
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
        
        int n;
        cin>>n;
        
        if(n<31)
        {
            cout<<"NO\n";
            continue;
        }
        
        cout<<"YES\n";
        if( n-30 != 6 && n-30!= 14 && n-30!= 10)
        {
            cout<<"6 10 14 "<<n-30<<"\n";
        }
        else
        {
            cout<<"6 10 15 "<<n-31<<"\n";
        }
        
        
        
    }
    
    
    
    
    
    
    
}
