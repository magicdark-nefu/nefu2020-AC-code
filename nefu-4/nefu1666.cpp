#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,ans,a,c;
	while(cin>>n)
	{
        a=3;
		ans=2;
		while(n>0)
		{

		    c=1e9+7;
			if(n%2!=0)
            {
              ans=ans*a%c;
              n=n-1;
            }
			a=a*a%c;
			n/=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
