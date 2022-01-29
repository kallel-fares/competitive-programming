/*
 * Codeforces 1551C - Interesting Story
 * Rating: 1500 | Tags: greedy, sortings, strings
 * Problem:    https://codeforces.com/problemset/problem/1551/C
 * Submission: https://codeforces.com/contest/1551/submission/144435110
 * Solved: 2022-01-29 (PRACTICE)
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

 
 bool cmp0(vector<int>& v1, vector<int>& v2)
{
     return v1[0]>v2[0];
 }

bool cmp1(vector<int>& v1, vector<int>& v2)
{
    return v1[1]>v2[1];
}

bool cmp2(vector<int>& v1, vector<int>& v2)
{
    return v1[2]>v2[2];
}bool cmp3(vector<int>& v1, vector<int>& v2)
{
    return v1[3]>v2[3];
}bool cmp4(vector<int>& v1, vector<int>& v2)
{
    return v1[4]>v2[4];
}
/*
 
 
 
 2 1 3
 
 
 
*/
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
        
        
        
        
        
    testc
    {
        
        
        int n;
        cin>>n;
        
        vector<vector<int>> vec(n,vector<int>(6));
        
        for(int i=0;i<n;i++)
        {
            string aux;
            cin>>aux;
            
            for(int j=0;j<aux.size();j++)
            {
                for(int k=0;k<5;k++)
                {
                    if(k==aux[j]-'a')
                    {
                        vec[i][k]++;
                    }
                    else
                    {
                        vec[i][k]--;
                    }
                }
            }
        }
        
//
//        for(auto x:vec)
//        {
//            for(auto y:x)
//            {
//                cout<<y<<" ";
//            }
//            cout<<"\n";
//        }
        
        
        
//        cout<<"||||||\n";
//        for(auto x:vec)
//        {
//            for(auto y:x)
//            {
//                cout<<y<<" ";
//            }
//            cout<<"\n";
//        }
        sort(vec.begin(), vec.end(), cmp0);
        int ans=0;
        int s=0,cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
            s+=vec[i][0];
            if(s<=0)
                break;
            cnt++;
            ans=max(ans,cnt);
        }
        /////////////////////////////
        
        sort(vec.begin(), vec.end(), cmp1);
        
        s=0,cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
            s+=vec[i][1];
            if(s<=0)
                break;
            cnt++;
            ans=max(ans,cnt);
        }
        ///////////////////////////////
        
        sort(vec.begin(), vec.end(), cmp2);
        
        s=0,cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
            s+=vec[i][2];
            if(s<=0)
                break;
            cnt++;
            ans=max(ans,cnt);
        }
        //////////////////////////////
        sort(vec.begin(), vec.end(), cmp3);
        
        s=0,cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
            s+=vec[i][3];
            if(s<=0)
                break;
            cnt++;
            ans=max(ans,cnt);
        }
        //////////////////////////////
        sort(vec.begin(), vec.end(), cmp4);
        
        s=0,cnt=0;
        
        
        for(int i=0;i<n;i++)
        {
            s+=vec[i][4];
            if(s<=0)
                break;
            cnt++;
            ans=max(ans,cnt);
        }
        cout<<ans<<"\n";
        
        
        
        
    }
    
     
}
