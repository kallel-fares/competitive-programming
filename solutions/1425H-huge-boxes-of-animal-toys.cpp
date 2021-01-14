/*
 * Codeforces 1425H - Huge Boxes of Animal Toys
 * Rating: 1300 | Tags: constructive algorithms
 * Problem:    https://codeforces.com/problemset/problem/1425/H
 * Submission: https://codeforces.com/contest/1425/submission/104267895
 * Solved: 2021-01-14 (PRACTICE)
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

	//freopen("","r",stdin);
	testc
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		
		
		vector<string> vect(5);
		
		vect[0]=vect[1]=vect[2]=vect[3]="Tidak";
		
		if((a+b)&1)
		{
			vect[0]=vect[1]="Ya";
			if(a==0 && d==0)
			{
				vect[0]="Tidak";
			}
			
			if(b==0 && c==0)
			{
				vect[1]="Tidak";
			}
		}	
		else
		{
			vect[2]=vect[3]="Ya";
			if(a==0 && d==0)
			{
				vect[3]="Tidak";
			}
			
			if(b==0 && c==0)
			{
				vect[2]="Tidak";
			}
		}
		
		cout<<vect[0]<<" "<<vect[1]<<" "<<vect[2]<<" "<<vect[3]<<"\n";
	
		
		
		
		//memset(tab,0,4*(n+1));
	
	}


}
