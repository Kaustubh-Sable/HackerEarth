//https://www.hackerearth.com/may-easy-16/algorithm/elevator-manager/
#include<iostream>
#include<cmath>
#include<stdio.h>
#include<math.h>
using namespace std;

long long noofd(long long num)
{
	long long cnt=0,i;
	for (i=1;i<=sqrt(num);i++)
	{	if (num % i == 0&&i*i!=num)
		    cnt+=2;
		if(num % i == 0&&i*i==num)
		    ++cnt;
	}
	return cnt;
}

int main()
{
   int t;
   long q,k;
   long long n,f,nopl=0,curr=1;
   double dist=0;
   cin>>n>>q;
   while(q--)
   {
	cin>>t>>f>>k;
	if(t==1)
	{
		if(noofd(f+k)!=2)
			continue;
		nopl+=k;
		dist+=abs(f-curr);
		curr=f;
	}
	else if(t==2)
	{
		if(noofd(f+k)%2==0)
			continue;
		nopl-=k;
		dist+=abs(f-curr);
		curr=f;
	}
   }
   printf("%0.0f %lld\n",fmod(dist,1000000007),nopl);
   return 0;
}
