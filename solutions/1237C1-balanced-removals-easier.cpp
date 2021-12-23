/*
 * Codeforces 1237C1 - Balanced Removals (Easier)
 * Rating: 1700 | Tags: constructive algorithms, geometry, greedy
 * Problem:    https://codeforces.com/problemset/problem/1237/C1
 * Submission: https://codeforces.com/contest/1237/submission/140365041
 * Solved: 2021-12-23 (PRACTICE)
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


bool cmp(const vector<ll> & a,const vector<ll> & b)
{
    if(a[0]==b[0])
    {
        if(a[1]==b[1])
        {
            return a[2]<b[2];
        }
        else
            return a[1]<b[1];
    }
    return a[0]<b[0];
}

double dis(vector<ll>& v1,vector<ll>& v2)
{
    double ans=0;
    for(int i=0;i<3;i++)
        ans+=(v1[i]-v2[i])*(v1[i]-v2[i]);
    
    
    return sqrt(ans);
}

bool equals(vector<ll>& v1,vector<ll>& v2)
{
    int a=0;
    for(int i=0;i<3;i++)
        if(v1[i]==v2[i])
            a++;
    
    if(a==3)
        return true;
    return false;
    
    
    
}


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
    
    
    
    
    
    vector<vector<ll>> vec(n, vector<ll>(4));
    vector<ll> mark(n+1);
    
    
    for(int i=0;i<n;i++)
    {
        
        cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
        
        vec[i][3]=i+1;
    }
    
    
    
    
        //cout<<data.size()<<" ";
        
        
    for(int i=0;i<n;i++)
    {
        if(mark[vec[i][3]])
            continue;
        double mini=1e10;
        cout<<vec[i][3]<<" ";
        vector<ll> ans;
            
            
        for(int j=i+1;j<n;j++)
        {
            if(mark[vec[j][3]])
                continue;
            if(equals(vec[i],vec[j]))
                continue;
            double d=dis(vec[i],vec[j]);
                //cout<<d<<"|";
            if(d<mini)
            {
                mini=d;
                ans=vec[j];
            }
                
        }
        cout<<ans[3]<<"\n";
        mark[ans[3]]++;
    }
        
        
        
        
        
    
    
    
    
    
}
