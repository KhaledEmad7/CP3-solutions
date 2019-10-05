#include <bits/stdc++.h>

using namespace std;

int t,n,a,b,c,sum;
int main(){
    scanf("%d", &t);
    while(t--){
        sum=0;
        scanf("%d", &n);
        while(n--){
            scanf("%d%d%d", &a, &b, &c);
            sum += a*c;
        }
        printf("%d\n", sum);
    }

}
