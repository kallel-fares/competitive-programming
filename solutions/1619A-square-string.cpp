/*
 * Codeforces 1619A - Square String?
 * Rating: 800 | Tags: implementation, strings
 * Problem:    https://codeforces.com/problemset/problem/1619/A
 * Submission: https://codeforces.com/contest/1619/submission/140021197
 * Solved: 2021-12-20 (CONTESTANT)
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




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    testc{
        string ch;
        cin>>ch;
        
        if(((int)ch.size())&1)
        {
            cout<<"NO\n";
        }
        else
        {
            int v=0;
            for(int i=0;i<((int)ch.size())/2;i++)
            {
                if(ch[i]!=ch[((int)ch.size())/2+i])
                    v=1;
                
            }
            if(v)
            {
                cout<<"NO\n";
            }
            else
                cout<<"YES\n";
        }
    }
    


}
