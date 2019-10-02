#include <bits/stdc++.h>

using namespace std;

int n, x, sum1, sum2, c=0;
int main(){

  while(scanf("%d", &n), n){
        c++;
        sum1 = sum2 = 0;
       for(int i=0; i<n; i++){
            scanf("%d", &x);
            if(x) sum1++;
            else sum2++;
       }
       printf("Case %d: %d\n", c, sum1-sum2);

    }
}
