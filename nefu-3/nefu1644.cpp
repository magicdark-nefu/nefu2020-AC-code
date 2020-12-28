#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long c=0,co=0,cow=0;
	char str[100001];
	cin>>n>>str;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='C')c++;
		if(str[i]=='O')co+=c;
		if(str[i]=='W')cow+=co;
	}
	cout<<cow;
	return 0;
}
