/*
Author Name : - digs007
Program name - Problem_4

*/
#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int INF = 0x3f3f3f3f;
int n,a[2010],ans,tem;

void dfs(int u) {
    tem++;
    if(a[u]==-1)
        return ;
    dfs(a[u]);
}
void solve() {
    ans=-INF;
    for(int i=1;i<=n;i++) {
        tem=0;
        dfs(i);
        ans=max(ans,tem);
    }
    printf("%d\n",ans);
}
int main() {
    while(~scanf("%d",&n)) {
        for(int i=1;i<=n;i++)
            scanf("%d",a+i);
        solve();
    }
    return 0;
}
