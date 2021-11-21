/*
 * Codeforces 1555B - Two Tables
 * Rating: 1300 | Tags: brute force
 * Problem:    https://codeforces.com/problemset/problem/1555/B
 * Submission: https://codeforces.com/contest/1555/submission/136342450
 * Solved: 2021-11-21 (PRACTICE)
 */

/***********dicfore************/
 
#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
//#include "/users/kallelfares/bits/stdc++.h"
using namespace std;
 
int finish(int x,int y,int m)
{
    for(int i=y;i<m;i++)
        cout<<x+1<<" "<<i+1<<"\n";
    int i=0;
    for(i=0;i<y;i++)
        cout<<x+1<<" "<<i+1<<"\n";
    return i-1;
}


const int MOD=0;
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    testc
    {
        int w,h,x1,y1,x2,y2,t,o;
        
        cin>>w>>h;
        cin>>x1>>y1>>x2>>y2;
        cin>>o>>t;
        
        
        
        if(w<x2-x1+o && h<y2-y1+t)
        {
            cout<<"-1\n";
        }
        else
        {
            int dl,dr,du,dd,distx=1e9,disty=1e9;
            
            dl=x1;
            dd=y1;
            du=h-y2;
            dr=w-x2;
            
            //cout<<dl<<" "<<du<<" "<<dr<<" "<<dd<<" \n";
            if(du+dd>=t)
                disty=min(max(t-dd,0),max(t-du,0));
            
            
            if(dl+dr>=o)
                distx=min(max(o-dl,0),max(o-dr,0));
            
            //cout<<distx<<" "<<disty<<" ";
            
            cout<<min(distx,disty)<<"\n";
            
            
        }
    }
    
    
    
}
