/*
 * Codeforces gym102920B - Commemorative Dice
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102920/problem/B
 * Submission: https://codeforces.com/gym/102920/submission/109962444
 * Solved: 2021-03-14 (PRACTICE)
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

	
	vector<int>vec1(6),vec(6);
	int ans=0;
	for(int i=0;i<6;i++)
	{
		cin>>vec[i];	
	}
	
	for(int i=0;i<6;i++)
	{
		cin>>vec1[i];
	}
	
	sort(vec.begin(),vec.end());
	sort(vec1.begin(),vec1.end());
	
	for(int i=0;i<6;i++)
	{
		auto aux=lower_bound(vec1.begin(),vec1.end(),vec[i])-vec1.begin();	
		//cout<<aux<<" ";
		ans+=aux;
		
	}
	//cout<<"\n";
	int g=__gcd(ans,36);
	cout<<ans/g<<"/"<<36/g;

}
