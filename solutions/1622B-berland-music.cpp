/*
 * Codeforces 1622B - Berland Music
 * Rating: 1000 | Tags: data structures, greedy, math, sortings
 * Problem:    https://codeforces.com/problemset/problem/1622/B
 * Submission: https://codeforces.com/contest/1622/submission/140775854
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
        int n;
        cin>>n;
        
        vector<int> vec(n),ans(n);
        
        vector<pair<int,int>> z,o;
        string ch;
        
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        cin>>ch;
        
        
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='1')
            {
                o.pb(make_pair(vec[i],i));
            }
            else
            {
                z.pb(make_pair(vec[i],i));
            }
        }
        
        sort(z.begin(), z.end());
        sort(o.begin(), o.end());
        
        
        int c=1;
        for(int i=0;i<z.size();i++)
        {
            ans[z[i].second]=c;
            c++;
        }
        
        for(int i=0;i<o.size();i++)
        {
            ans[o[i].second]=c;
            c++;
        }
        
        
        for(auto x:ans)
            cout<<x<<" ";
        cout<<"\n";
        
        
    }
    
    
}
