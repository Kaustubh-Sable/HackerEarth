// Accuracy for this solution: 40%

#include<iostream>
using namespace std;

void quickSort(long arr[], long left, long right);

int main()
{
   int T;
   long sum1,sum2,N,i,j;
   cin>>T;
   while(T--)
   {
  cin>>N;
  if(N<=1)
    return -1;
  long arr[N];
  for(i=0;i<N;i++)
    cin>>arr[i];
  quickSort(arr,0,N-1);
  if(arr[0]>=0)
  {
    sum1=0;
    for(i=1;i<N;i++)
      sum1+=arr[i];
    sum1-=arr[0];
  }
  else
  {
    i=0;
    sum1=sum2=0;
    while(arr[i]<=0)
    {	sum2+=arr[i];
      i++;
    }
    while(i<N)
    {
      sum1+=arr[i];
      i++;
    }
    sum1-=sum2;
  }
  cout<<sum1<<endl;
   }
   return 0;
}

void quickSort(long arr[], long left, long right) {

      long i = left, j = right;

      long tmp;

      long pivot = arr[(left + right) / 2];



      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };



      /* recursion */

      if (left < j)

            quickSort(arr, left, j);

      if (i < right)

            quickSort(arr, i, right);

}
