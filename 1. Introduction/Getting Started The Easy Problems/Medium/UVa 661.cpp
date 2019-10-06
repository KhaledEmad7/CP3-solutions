#include <bits/stdc++.h>

using namespace std;


int n, m, c , A[25], idx, cnt;
bool onOff[25];

int main(){
freopen("araf_bara.txt", "wt", stdout);
    while(scanf("%d%d%d", &n, &m, &c), n || m || c){
        cnt ++;
        int sum = 0, mx = 0;
        bool flag = 1;

        for(int i=1; i<=n; i++){
            scanf("%d", A+i);
            onOff[i]=0;
        }

        for(int i=0; i<m; i++){
            scanf("%d", &idx);
            if(onOff[idx])
                sum -= A[idx], onOff[idx]=0;
            else
                sum += A[idx], onOff[idx]=1;

            mx = max(sum,mx);
            if(sum > c)
                    flag = 0;
        }

        printf("Sequence %d\n", cnt);

        if(flag){
            printf("Fuse was not blown.\nMaximal power consumption was ");
            if(mx>1)
                printf("%d amperes.\n", mx);

             else
                printf("%d ampere.\n", mx);

        }
        else
            printf("Fuse was blown.\n");

        puts("");
    }

}
