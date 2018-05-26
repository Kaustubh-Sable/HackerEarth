// Accuracy of this solution: 56%

#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a,b,strg;
   int i,j,k,flag;
   cin>>a>>b;
   int q;
   cin>>q;
   while(q--)
   {
  cin>>strg;
  if(a.size()+b.size()!=strg.size())
  {	cout<<"NO\n";	continue;
  }
  i=j=k=0;	flag=1;
  while(k<strg.size() && flag==1)
  {
    flag=0;
    while(strg[k]==a[i] && k<strg.size() && i<a.size())
    {	i++;	k++;	flag=1;	}
    while(strg[k]==b[j] && k<strg.size() && j<b.size())
    {	j++;	k++;	flag=1;	}
  }
  if(flag==1)
    cout<<"YES\n";
  else
    cout<<"NO\n";
   }
   return 0;
}
