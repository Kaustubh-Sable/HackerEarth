// Score : 2.2/10

#include<iostream>
using namespace std;

int noofd(int num)
{
  int cnt=0;
  while(num)
  {
    ++cnt;
    num/=10;
  }
  return cnt;
}

int primef(int n)
{
    if(n==1)
  return 1;
    int cnt=0;
    if(n%2 == 0)
    {
        ++cnt;
  while (n%2 == 0)
  {        n = n/2;
  }
    }

    for (int i=3;i*i<=n;i+=2)
    {
        if(n%i == 0)
        {
            ++cnt;
      while (n%i == 0)
            {	n = n/i;
      }
        }
    }
    if (n > 2)
  ++cnt;
    return cnt;
}

int main()
{
   int q,i,a,b,cnt,tmp,tmp1;
   cin>>q;
   while(q--)
   {
  cin>>a>>b;
  cnt=0;
  for(i=a;i<=b;++i)
  {
    tmp=noofd(i);
    tmp1=primef(i);
//		cout<<i<<tmp<<" "<<tmp1<<endl;
    if(tmp==tmp1)
      cnt++;
  }
  cout<<cnt<<endl;
   }
}
