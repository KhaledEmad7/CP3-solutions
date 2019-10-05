#include <bits/stdc++.h>

using namespace std;

int t,n,x, sum1,sum2;
int main(){

    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d",&n);
        sum1 = sum2 = 0;
        while(n--){
            scanf("%d", &x);
            sum1 += 10*((x/30)+1);
            sum2 += 15*((x/60)+1);
        }
    printf("Case %d: ", i);

    if(sum1<sum2)
        printf("Mile %d\n", sum1);
    else if(sum1 > sum2)
        printf("Juice %d\n", sum2);
    else
        printf("Mile Juice %d\n", sum1);

    }
}
