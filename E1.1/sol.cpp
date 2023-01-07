#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorialfun(int num)
{
	if (num>0)
	{
		return num*factorialfun(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cin>>num;
	cout<<factorialfun(num);
}
