// Accuracy of this solution : 30%

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

vector<int> ap;

void primeFactors(int n)
{
  if (n%2 == 0)
  {
    int i=2;
    ap.push_back(i);
    n = n/2;
  }
  while (n%2 == 0)
    n = n/2;
  for (int i = 3; i <= sqrt(n); i = i+2)
  {
    if (n%i == 0)
    {
      ap.push_back(i);
      n = n/i;
    }
    while (n%i == 0)
      n = n/i;
  }
  if (n > 2)
    ap.push_back(n);
}

int is_prime(int num)
{
  if(num==1)
    return 0;
  if(num==2 || num==3)
    return 1;
  if(num%2==0)
    return 0;
  if(num%3==0)
    return 0;
  int i=5,w=2;
  while(i*i<=num)
  {
    if(num%i==0)
       return 0;
    i+=w;
    w=6-w;
  }
  return 1;
}

int main()
{
   int T,x,y,temp1,temp2,lcm,asize;
   cin>>T;
   while(T--)
   {
  cin>>x>>y;
  temp1 = x;
  temp2 = y;
  while(temp1 != temp2) {
    if(temp1 > temp2)
              temp1 -= temp2;
          else
              temp2 -= temp1;
  }
  lcm = (x*y) / temp1;
  ap.clear();
  primeFactors(lcm);
  asize=ap.size();
  if(is_prime(asize))
    cout<<"X\n";
  else
    cout<<"Y\n";
   }
   return 0;
}
