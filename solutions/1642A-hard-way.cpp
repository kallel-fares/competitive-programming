/*
 * Codeforces 1642A - Hard Way
 * Rating: 800 | Tags: geometry
 * Problem:    https://codeforces.com/problemset/problem/1642/A
 * Submission: https://codeforces.com/contest/1642/submission/147418891
 * Solved: 2022-02-23 (CONTESTANT)
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
//        vector<int>vec(n);
//        for(int i=0;i<n;i++)
//        {
//            cin>>vec[i];
//        }
        
        pair<int, int> a,b,c;
        
        
        cin>>a.first>>a.second;
        cin>>b.first>>b.second;
        cin>>c.first>>c.second;
        
        if(a.second==b.second)
        {
            if(c.second>a.second)
            {
                cout<<"0\n";
            }
            else
            {
                cout<<abs(a.first-b.first)<<"\n";
            }
            continue;
        }
        
        
        
        if(c.second==b.second)
        {
            if(a.second>c.second)
            {
                cout<<"0\n";
            }
            else
            {
                cout<<abs(c.first-b.first)<<"\n";
            }
            continue;
        }
        
        
        if(a.second==c.second)
        {
            if(b.second>a.second)
            {
                cout<<"0\n";
            }
            else
            {
                cout<<abs(a.first-c.first)<<"\n";
            }
            continue;
        }
        
        cout<<"0\n";
        
        
        
    }
    
}
