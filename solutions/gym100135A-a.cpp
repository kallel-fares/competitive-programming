/*
 * Codeforces gym100135A - A
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/100135/problem/A
 * Submission: https://codeforces.com/gym/100135/submission/113332605
 * Solved: 2021-04-17 (PRACTICE)
 */

/***********dicfore************/

#define pb push_back
#define ll long long
#define lowpos 1e-9
#define forl(i,b,n) for(int i=b;i<n;i++)
#define testc int t;cin>>t;while(t--)
#include <bits/stdc++.h>
using namespace std;

const int N=3e5+5;

int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


  	ofstream myfile;
	freopen("ladder.in","r",stdin);
	myfile.open ("ladder.out");
	
		int n;
		cin>>n;
		vector<int> vec(n+2),ans(n+2);
		
		
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			ans[i]=vec[i];
		}
		
		
		
		ans[0]=vec[0];
		ans[1]=max(vec[1]+vec[0],vec[1]);
		
		
		for(int i=2;i<n;i++)
		{
			ans[i]+=max(ans[i-1],ans[i-2]);
		}
		
		
		/*for(auto x:ans)
			cout<<x<<" ";*/
			
			
			
		//cout<<ans[n-1]<<"\n";
		
		myfile<<ans[n-1]<<"\n";
			
			
  		myfile.close();
	
	
	


}
