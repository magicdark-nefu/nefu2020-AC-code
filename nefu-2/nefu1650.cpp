#include<bits/stdc++.h>
using namespace std;
const int N=1e7+5;
int flag[N],tmp,n,k,x;long long ans;
int main(){
    while(scanf("%d%d",&n,&k)!=EOF){
        memset(flag,0,sizeof(flag));
        for(register int i=1;i<=n;++i){
            scanf("%d",&x);
            flag[x]++;
        }
        int yu=k;ans=0;
        for(register int i=(int)1e5;i>=1;--i){
            if(!flag[i])continue;
            if(flag[i]>=yu){
                ans+=yu*i;
                break;
            }
            else{
                ans+=flag[i]*i;
                yu-=flag[i];
            }
            if(yu==0)break;
        }
        cout<<ans<<endl;
    }
    return 0;
} 
