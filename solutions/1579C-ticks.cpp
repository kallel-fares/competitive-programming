/*
 * Codeforces 1579C - Ticks
 * Rating: 1500 | Tags: greedy, implementation
 * Problem:    https://codeforces.com/problemset/problem/1579/C
 * Submission: https://codeforces.com/contest/1579/submission/168366349
 * Solved: 2022-08-15 (PRACTICE)
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
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/ismail.txt", "r", stdin);
        freopen("/Users/kallelfares/Problem_Solving/ps/ps/output.txt", "w", stdout);
    #endif

    testc{
        
        int n,m,k;
        cin>>n>>m>>k;
        vector<string> vec;
        
        vector<vector<int>> mark(n+1, vector<int>(m+1));
        
        for(int i=0;i<n;i++)
        {
            string ch;
            cin>>ch;
            vec.pb(ch);
            
        }
        
//        for(auto x:vec)
//        {
//            cout<<x<<"\n";
//        }
        
        int v=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(vec[i][j]=='.')
                    continue;
                
                
                int count=0;
                
                while( i-count>=0 && j-count>=0 && j+count<m && vec[i-count][j-count]=='*' && vec[i-count][j+count]=='*' )
                {
                    count++;
                }
                if(count-1<k)
                {
                    if(!mark[i][j])
                        v=1;
                    continue;
                }
                
                count=0;
                
                while( i-count>=0 && j-count>=0 && j+count<m && vec[i-count][j-count]=='*' && vec[i-count][j+count]=='*' )
                {
                    mark[i-count][j-count]=mark[i-count][j+count]=1;
                    count++;
                }
                
                
                
            }
            
        }
        
        if(v)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        
    }
    
    
}
