//https://www.hackerearth.com/june-easy-16/algorithm/benny-and-the-broken-odometer/
#include<bits/stdc++.h>
using namespace std;
 
long countNumbersWith3(long n)
{
   if (n < 3)
      return 0;
 
   long d = log10(n);
 
   long *a = new long[d+1];
   a[0] = 0, a[1] = 1;
   for (long i=2; i<=d; i++)
      a[i] = a[i-1]*9 + ceil(pow(10,i-1));
 
   long p = ceil(pow(10, d));
 
   long msd = n/p;
 
   if (msd == 3)
      return (msd)*a[d] + (n%p) + 1;
 
   if (msd > 3)
      return (msd-1)*a[d] + p + countNumbersWith3(n%p);
 
   return (msd)*a[d] + countNumbersWith3(n%p);
}
 
int main()
{
   int t;
  cin>>t;
  long n;
  while(t--)
  {
   cin>>n;
   cout<<n-countNumbersWith3(n)<<endl;
  }
   return 0;
}
