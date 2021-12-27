/*
 * Codeforces 1622A - Construct a Rectangle
 * Rating: 800 | Tags: geometry, math
 * Problem:    https://codeforces.com/problemset/problem/1622/A
 * Submission: https://codeforces.com/contest/1622/submission/140758721
 * Solved: 2021-12-27 (CONTESTANT)
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



/*
 110 111

*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    testc
    {
        ll c,a,b;
        
        vector<int> vec;
        
        for(int i=0;i<3;i++)
        {
            int a;
            cin>>a;
            vec.pb(a);
        }
        
        sort(vec.begin(), vec.end());
        
        
        if(vec[2]==vec[0]+vec[1])
        {
            cout<<"YES\n";
        }
        else
        {
            if(vec[0]==vec[1] && vec[2]%2==0)
            {
                cout<<"YES\n";
                continue;
            }
            
            if(vec[1]==vec[2] && vec[0]%2==0)
            {
                cout<<"YES\n";
                continue;
            }
            
            cout<<"NO\n";
            
        }
        
        
        
    }
    
    
}
