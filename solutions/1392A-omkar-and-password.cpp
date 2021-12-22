/*
 * Codeforces 1392A - Omkar and Password
 * Rating: 800 | Tags: greedy, math
 * Problem:    https://codeforces.com/problemset/problem/1392/A
 * Submission: https://codeforces.com/contest/1392/submission/140297763
 * Solved: 2021-12-22 (VIRTUAL)
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
    
    testc{
        
        int n;
        cin>>n;
        
        vector<int> vec(n);
        
        
        int s=1;
        for(int i=0;i<n;i++)
            cin>>vec[i];
        
        
        for(int i=1;i<n;i++)
        {
            if(vec[i]==vec[0])
            {
                s++;
            }
        }
        
        if(s==n)
            cout<<n<<"\n";
        else
            cout<<"1\n";
    }
}
