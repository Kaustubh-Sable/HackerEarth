// https://www.hackerearth.com/problem/algorithm/sonas-number-sequence/
#include<iostream>
using namespace std;
int main()
{
   int N,i;
   long long b0,b1,ai;
   cin>>N;
   cin>>b0;
   cout<<b0;
   for(i=1;i<N;i++)
   {
  cin>>b1;
  ai = (i+1)*b1 - i*b0;
  cout<<" "<<ai;
  b0=b1;
   }
   cout<<endl;
   return 0;
}
