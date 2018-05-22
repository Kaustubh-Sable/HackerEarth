//https://www.hackerearth.com/may-easy-16/algorithm/library-boy/
    #include<iostream>
    using namespace std;
     
    int main()
    {
    	int n,i,ans=0,cnt[26]={0};
    	cin>>n;
    	string a[n];
    	for(i=0;i<n;++i)
    	{	cin>>a[i];
    		++cnt[a[i][0]-'a'];
    	}
    	for(i=0;i<26;++i)
    		if(cnt[i]!=0)
    			ans=ans+cnt[i]/10+1;
    	cout<<ans<<endl;
    	return 0;
    }
