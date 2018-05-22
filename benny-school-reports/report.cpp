//https://www.hackerearth.com/june-easy-16/algorithm/benny-and-her-school-reports/
#include<iostream>
using namespace std;

int main()
{
   int t,n,i;
   cin>>t;
   while(t--)
   {
	long m,x,ans,sum=0;
	cin>>n>>m>>x;
	long a[n];
	for(i=0;i<n;++i)
	{	cin>>a[i];
		sum+=a[i];
	}
	ans=x*(n+1)-sum;
	if(ans<1)
		cout<<"1\n";
	else if(ans>m)
		cout<<"Impossible\n";
	else
		cout<<ans<<endl;
   }
   return 0;
}
