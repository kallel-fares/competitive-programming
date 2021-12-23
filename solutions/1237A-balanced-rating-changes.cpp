/*
 * Codeforces 1237A - Balanced Rating Changes
 * Rating: 1000 | Tags: implementation, math
 * Problem:    https://codeforces.com/problemset/problem/1237/A
 * Submission: https://codeforces.com/contest/1237/submission/140339350
 * Solved: 2021-12-23 (VIRTUAL)
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
    
        int n;
        cin>>n;
        
        int v=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            if(a%2==0)
                cout<<a/2;
            else
            {
                if(a<0)
                {
                    if(v<0)
                    {
                        cout<<a/2;
                        v++;
                    }
                    else
                    {
                        cout<<a/2-1;
                        v--;
                    }
                }
                else
                {
                    if(v<0)
                    {
                        cout<<a/2+1;
                        v++;
                    }
                    else
                    {
                        cout<<a/2;
                        v--;
                    }
                }
                    
            }
            cout<<"\n";
        }
    
}
