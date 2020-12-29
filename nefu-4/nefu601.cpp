#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,ans;
	while(cin>>a>>b>>c)
	{
		ans=1;
		while(b>0)
		{
			if(b%2!=0)
            {
              ans=ans*a%c;
              b=b-1;
            }
			a=a*a%c;
			b/=2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
