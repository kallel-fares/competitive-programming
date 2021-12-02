/*
 * Codeforces 1133A - Middle of the Contest
 * Rating: 1000 | Tags: implementation
 * Problem:    https://codeforces.com/problemset/problem/1133/A
 * Submission: https://codeforces.com/contest/1133/submission/137784843
 * Solved: 2021-12-02 (PRACTICE)
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




int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    //string t1,t2;
    int t1,m1;
    scanf("%d:%d",&t1,&m1);
    int t2,m2;
    scanf("%d:%d",&t2,&m2);
    
    
    int one=t1*60+m1,two=t2*60+m2;
    
    one+=(two-one)/2;
    if((one/60)/10==0)
        printf("0");
    
    printf("%d:",one/60);
    
    if((one%60)/10==0)
        printf("0");
    
    printf("%d",one%60);
    
    
        
    
    
    
}
