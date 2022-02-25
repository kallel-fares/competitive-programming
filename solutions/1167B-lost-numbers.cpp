/*
 * Codeforces 1167B - Lost Numbers
 * Rating: 1400 | Tags: brute force, divide and conquer, interactive, math
 * Problem:    https://codeforces.com/problemset/problem/1167/B
 * Submission: https://codeforces.com/contest/1167/submission/147648694
 * Solved: 2022-02-25 (PRACTICE)
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
   
    
    /*
     
     
     */
    
    
    vector<int>vec={4,8, 15, 16,23, 42};
    map<int, pair<int, int>> m;
    
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            m[vec[i]*vec[j]]=make_pair(vec[i], vec[j]);
        }
    }
    
    
    vector<int>ans;
    
    cout<<"? 1 2\n";
    cout << flush;
    int a;
    cin>>a;
    ans.pb(a);
    cout<<"? 2 3\n";
    cout << flush;
    cin>>a;
    ans.pb(a);
    cout<<"? 4 5\n";
    cout << flush;
    cin>>a;
    ans.pb(a);
    cout<<"? 5 6\n";
    cout << flush;
    cin>>a;
    ans.pb(a);
    
    cout<<"! ";
    if(m[ans[0]].first==m[ans[1]].second)
    {
        cout<<m[ans[0]].second<<" "<<m[ans[0]].first<<" "<<m[ans[1]].first<<" ";
    }
    else if(m[ans[0]].first==m[ans[1]].first)
    {
        cout<<m[ans[0]].second<<" "<<m[ans[0]].first<<" "<<m[ans[1]].second<<" ";
    }
    else if(m[ans[0]].second==m[ans[1]].first)
    {
        cout<<m[ans[0]].first<<" "<<m[ans[0]].second<<" "<<m[ans[1]].second<<" ";
    }
    else
    {
        cout<<m[ans[0]].first<<" "<<m[ans[0]].second<<" "<<m[ans[1]].first<<" ";
    }
    
    if(m[ans[2]].first==m[ans[3]].second)
    {
        cout<<m[ans[2]].second<<" "<<m[ans[2]].first<<" "<<m[ans[3]].first<<" ";
    }
    else if(m[ans[2]].first==m[ans[3]].first)
    {
        cout<<m[ans[2]].second<<" "<<m[ans[3]].first<<" "<<m[ans[3]].second<<" ";
    }
    else if(m[ans[2]].second==m[ans[3]].first)
    {
        cout<<m[ans[2]].first<<" "<<m[ans[2]].second<<" "<<m[ans[3]].second<<" ";
    }
    else
    {
        cout<<m[ans[2]].first<<" "<<m[ans[2]].second<<" "<<m[ans[3]].first<<" ";
    }
    
    
    
}
