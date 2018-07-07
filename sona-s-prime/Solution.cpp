// https://www.hackerearth.com/challenge/college/connect-the-code/algorithm/sonas-prime/
#include<iostream>
using namespace std;
int main()
{
  int N,i,k,flag;
  cin>>N;
  long x[N];
  for(i=0;i<N;i++)
  cin>>x[i];
  for(i=0;i<N;i++)
  {
  flag=0;
  for(k=0;k<N;k++)
    if(x[i]%x[k]==0 && i!=k)
    {	flag=1;
      break;
    }
  if(flag!=1)
    cout<<x[i]<<" ";
  }
  cout<<endl;
  return 0;
}
