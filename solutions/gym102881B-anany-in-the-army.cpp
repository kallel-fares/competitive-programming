/*
 * Codeforces gym102881B - Anany in the Army
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102881/problem/B
 * Submission: https://codeforces.com/gym/102881/submission/102156002
 * Solved: 2020-12-23 (PRACTICE)
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
	
	freopen("sticks.in","r",stdin);
	testc
	{
		double tab[4]={0},k;
		
		cin>>tab[0]>>tab[1]>>tab[2]>>k;
		
		sort(tab,tab+3);
		
		//k=min(k+tab[0],tab[1]+tab[2]-1);
		tab[0]=min(k+tab[0],sqrt(tab[1]*tab[1]+tab[2]*tab[2]));
		//cout<<tab[0]<<" ";
		
		double p=(tab[0]+tab[1]+tab[2])/2;
		//cout<<p<<" "
		cout<<sqrt(p*(p-tab[0])*(p-tab[1])*(p-tab[2]))<<"\n";
		
	
	}


}
