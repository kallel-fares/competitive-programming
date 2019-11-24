/*
 * Codeforces 1238B - Kill `Em All
 * Rating: 1300 | Tags: greedy, sortings
 * Problem:    https://codeforces.com/problemset/problem/1238/B
 * Submission: https://codeforces.com/contest/1238/submission/65656861
 * Solved: 2019-11-24 (PRACTICE)
 */

//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

//srand(time(NULL));
//nombre_aleatoire = rand();


#include <bits/stdc++.h>
using namespace std;

int a;
set<int,greater<int> >ship;
int main ()
{
	int n,q,r,s=0;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		ship.clear();
		s=0;
		cin>>n>>r;
		for(int j=0;j<n;j++)
		{
			cin>>a;
			ship.insert(a);
			
		}
		set <int, greater <int> > :: iterator itr; 

	    for (itr = ship.begin(); itr != ship.end(); ++itr) 
	    { 
	        if(*itr-s*r>0)
	        {
	        	s++;
			}
	    } 
		cout<<s<<"\n";
		/*sort(tab,tab+n,greater<int>());
		set<int> shiv(tab,tab+n);
		for(it d=shiv.begin();d!=shiv.end();d++)
		{
			cout<<i<<" ";
		}
		for(int j=0;j<n;j++)
		{
			if(tab[j]-s*r>0)
			{
				s++;
			}
		}
		cout<<s;
		*/
	}


}
