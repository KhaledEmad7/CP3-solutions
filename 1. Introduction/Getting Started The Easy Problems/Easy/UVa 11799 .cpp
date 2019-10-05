#include <bits/stdc++.h>

using namespace std;

int t,n,x,mx;
int main(){

    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        mx = -1;
        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &x);
            mx = max(mx,x);
        }
        printf("Case %d: %d\n", i,mx);
    }

}
