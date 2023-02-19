/*
 * Codeforces 1793C - Dora and Search
 * Rating: 1200 | Tags: constructive algorithms, data structures, two pointers
 * Problem:    https://codeforces.com/problemset/problem/1793/C
 * Submission: https://codeforces.com/contest/1793/submission/194213939
 * Solved: 2023-02-19 (PRACTICE)
 */

/*********dicfore************/
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define lowpos 1e-4 ++
#define forl(i, b, n) for (int i = b; i < n; i++)
#define testc \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int m = 1e9 + 7;

int di[]={-1,0,1,0},dj[]={0,1,0,-1};
string directions="URDL";




ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//int solve(int i,int j,vector<vector<int>> &mark, vector<string> &vec, int n,int m,int k,int lvl)
//{
//    if(j-1<0 || j+1>=m || vec[i-1][j-1]=='.' || vec[i-1][j+1]=='.')
//    {
//        if(lvl>=k)
//        {
//
//            return 1;
//        }
//        return 0;
//    }
//    else
//    {
//        solve(i-1,j-1,mark,vec,n,m,k,lvl+1)
//    }
//}


//

// int ans;
// pair<int, int> dfs(vector<vector<int>> & tree, int u,string &ch)
//{
////    cout<<u<<" ";
//    int w=0,b=0;
//    if(ch[u-1]=='B')
//        b++;
//    else
//        w++;
//
//    for(auto x:tree[u])
//    {
//        pair<int, int> aux=dfs(tree,x,ch);
//        w+=aux.first;
//        b+=aux.second;
//    }
//
//
//    if(b==w)
//        ans++;
//
//    return make_pair(w, b);
//
//
//
//}


ll pew(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        
        if(b&1)
        {
            ans= ((a%m) * (ans%m))%m;
        }
        a= ((a%m) * (a%m))%m;
        b/=2;
    }
    
    return ans;
    
}







int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/input.txt", "r", stdin);
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/output.txt", "w", stdout);
    #endif
    
    
    testc
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        int l=0,r=n-1,mini=1,maxi=n,v=1;
        
    
        while(l<r && v)
        {
            v=0;
            if(vec[l]==maxi)
            {
                maxi--;
                l++;
                v++;
            }
            else if(vec[l]==mini)
            {
                mini++;
                l++;
                v++;
            }
            
            if(vec[r]==maxi)
            {
                maxi--;
                r--;
                v++;
            }
            else if(vec[r]==mini)
            {
                mini++;
                r--;
                v++;
            }
        }
        
        if(!v)
        {
            cout<<l+1<<" "<<r+1<<"\n";
        }
        else
        {
            if(r-l<=2)
            {
                cout<<"-1\n";
            }
        }
        
    }
    
    
    
}
