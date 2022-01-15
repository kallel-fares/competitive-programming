/*
 * Codeforces 1627A - Not Shading
 * Rating: 800 | Tags: constructive algorithms, implementation
 * Problem:    https://codeforces.com/problemset/problem/1627/A
 * Submission: https://codeforces.com/contest/1627/submission/142834225
 * Solved: 2022-01-15 (CONTESTANT)
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
    
    
    testc
    {
        
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        
        vector<string> vec;
        
        int b=0;
        
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            for(int j=0;j<m;j++)
            {
                if(ch[j]=='B')
                    b=1;
            }
            
            
            vec.pb(ch);
        }
        
        if(vec[r-1][c-1]=='B')
        {
            cout<<"0\n";
            continue;;
        }
        
        if(!b)
        {
            cout<<"-1\n";
            continue;
        }
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i][c-1]=='B')
                v++;
        }
        
        for(int i=0;i<m;i++)
        {
            if(vec[r-1][i]=='B')
                v++;
        }
        
        if(v)
        {
            cout<<"1\n";
        }
        else
            cout<<"2\n";
        
    }
    
}
