/*
 * Codeforces 1629A - Download More RAM
 * Rating: 800 | Tags: brute force, greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1629/A
 * Submission: https://codeforces.com/contest/1629/submission/143633194
 * Solved: 2022-01-22 (CONTESTANT)
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

 
 
 
/*
 110 111
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    testc
    {
        int n,k;
        cin>>n>>k;
        
        vector<pair<int, int>> vec(n,{0,0});
        for(int i=0;i<n;i++)
        {
            cin>>vec[i].first;
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i].second;
        }
        
        sort(vec.begin(), vec.end());
        
        
        
        for(int i=0;i<n;i++)
        {
            if(k<vec[i].first)
                break;
            k+=vec[i].second;
        }
        
        cout<<k<<"\n";
    }
     
}
