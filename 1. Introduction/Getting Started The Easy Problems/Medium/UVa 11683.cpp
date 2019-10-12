#include <bits/stdc++.h>

using namespace std;

int n, m, x, last, ans;

int main(){
    while(scanf("%d%d", &n, &m), n){
        ans = 0; last  = n;
        for(int i=0;i <m; i++){
            scanf("%d", &x);
            if(last > x)
                ans += last-x;
            last = x;

        }
        printf("%d\n", ans);
    }
}
