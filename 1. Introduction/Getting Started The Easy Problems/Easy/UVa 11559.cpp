#include <bits/stdc++.h>

using namespace std;

int n, b, h, w, p, x, mn;
int main(){

    while(~scanf("%d%d%d%d", &n, &b, &h, &w)){
        mn = 10005;
        for(int i=0; i<h; i++){
            scanf("%d", &p);
            for(int j=0; j<w; j++){
                scanf("%d", &x);
                if(x>=n)
                    mn = min(mn,p);
            }
        }
        if(mn*n > b)
            printf("stay home\n");
        else
            printf("%d\n", mn*n);

    }
}
