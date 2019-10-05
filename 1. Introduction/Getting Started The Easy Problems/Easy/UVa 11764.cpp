#include <bits/stdc++.h>

using namespace std;

int t,n,x,A[55],hi,lo;
int main(){

    scanf("%d", &t);
    for(int i=1; i<=t; i++){

        scanf("%d", &n);
        scanf("%d", &x);

        int current = x; hi= lo = 0;
        for(int j=1; j<n; j++){
            scanf("%d", &x);
            if(x>current)
                hi++;
            else if(x<current)
                lo++;
            current = x;

        }
        printf("Case %d: %d %d\n", i,hi, lo);
    }

}
