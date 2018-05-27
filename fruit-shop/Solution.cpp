// Score : 8.8/10



#include <iostream>
using namespace std;

int main()
{
    int a,b,p,cnt=0,na,nb,np,jm,temp;
    cin>>a>>b>>p;
    cin>>na>>nb>>np;
    cin>>jm;

    if(a<b)
    {
      if(a<p)
      {
        while(jm>a && na>0)
        {
          jm-=a;
          na--;
          cnt++;
        }
        if(b<p)
        {
          while(jm>b && nb>0)
          {
            jm-=b;
            nb--;
            cnt++;
          }
          while(jm>p && np>0)
          {
            jm-=p;
            np--;
            cnt++;
          }
        }
        else
        {
          while(jm>p && np>0)
          {
            jm-=p;
            np--;
            cnt++;
          }
          while(jm>b && nb>0)
          {
            jm-=b;
            nb--;
            cnt++;
          }
        }
      }
      else
      {
        while(jm>p && np>0)
        {
          jm-=p;
          np--;
          cnt++;
        }
        while(jm>a && na>0)
        {
          jm-=a;
          na--;
          cnt++;
        }
        while(jm>b && nb>0)
        {
          jm-=b;
          nb--;
          cnt++;
        }
      }
    }
    else
    {
      if(b<p)
      {
        while(jm>b && nb>0)
        {
          jm-=b;
          nb--;
          cnt++;
        }
        if(a<p)
        {
          while(jm>a && na>0)
          {
            jm-=a;
            na--;
            cnt++;
          }
          while(jm>p && np>0)
          {
            jm-=p;
            np--;
            cnt++;
          }
        }
        else
        {
          while(jm>p && np>0)
          {
            jm-=p;
            np--;
            cnt++;
          }
          while(jm>a && na>0)
          {
            jm-=a;
            na--;
            cnt++;
          }
        }
      }
      else
      {
        while(jm>p && np>0)
        {
          jm-=p;
          np--;
          cnt++;
        }
        while(jm>b && nb>0)
        {
          jm-=b;
          nb--;
          cnt++;
        }
        while(jm>a && na>0)
        {
          jm-=a;
          na--;
          cnt++;
        }
      }
    }

    cout<<cnt;
    return 0;
}
