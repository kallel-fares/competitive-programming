/*
 * Codeforces 1676H1 - Maximum Crossings (Easy Version)
 * Rating: 1400 | Tags: brute force
 * Problem:    https://codeforces.com/problemset/problem/1676/H1
 * Submission: https://codeforces.com/contest/1676/submission/156728228
 * Solved: 2022-05-10 (CONTESTANT)
 */

/*********dicfore************/
#define pb push_back
#define ll long long
#define lowpos 1e-4
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>

using namespace std;
 


const int m=1e9+7;


ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b);
}

//

//int ans;
//pair<int, int> dfs(vector<vector<int>> & tree, int u,string &ch)
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




 
 
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    

    
    testc
    {
        int n;
        cin>>n;
        
        vector<int> vec(n),fre(n+1);
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            ans+=fre[vec[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(vec[j]<vec[i])
                {
                    ans++;
                }
            }
            
        }
        
        cout<<ans<<"\n";
        
    }
    
    
    
}
