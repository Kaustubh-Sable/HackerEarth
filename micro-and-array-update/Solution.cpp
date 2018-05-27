#include <iostream>
using namespace std;

int main()
{
    int i,min,T,N,K;
    cin>>T;
    while(T--)
    {
        cin>>N>>K;
        int arr[N];
        for(i=0;i<N;++i)
            cin>>arr[i];
        min = arr[0];
        for(i=1;i<N;++i)
            if(arr[i]<min)
                min=arr[i];
        if(min>K)
            cout<<"0"<<endl;
        else
            cout<<K-min<<endl;
    }
    return 0;
}
