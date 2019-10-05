#include <bits/stdc++.h>

using namespace std;

int n,dep,A[25], x, y, p;
int main(){

    while(scanf("%d%d", &n, &dep), n || dep){
        bool f = 1;
        for(int i=0; i<n; i++)
            scanf("%d", A+i);

        while(dep--){
            scanf("%d %d %d", &x, &y, &p);
            A[x-1] -= p, A[y-1] += p;
        }

        for(int i=0; i<n; i++){
            if(A[i]<0)
                f = 0;
        }

        if(f)
            printf("S\n");
        else
            printf("N\n");
    }
}
