/*
 * Codeforces gym1021574 - North East South West
 * Rating: unrated | Tags: none
 * Problem:    https://codeforces.com/gym/102157/problem/4
 * Submission: https://codeforces.com/gym/102157/submission/65496210
 * Solved: 2019-11-21 (VIRTUAL)
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
string ch;
int l=0;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		if(ch=="left")
			l--;
		else if(ch=="right")
			l++;
		else
			l+=2;
		
	}

	if (l%4==0)
			cout<<"north";
		else if (l%4==1||l%4==-3)
			cout<<"east";
		else if (abs(l%4)==2)
			cout<<"south";
		else
			cout<<"west";

}
