
#include <bits/stdc++.h>

using namespace std;

int t,n,x,mx,mn;
int main(){
   scanf("%d", &t);
   while(t--){
       mx = -1, mn = 100;
       scanf("%d", &n);
       for(int i=0; i<n; i++){
            scanf("%d", &x);
            mx = max(mx,x);
            mn = min(mn,x);
       }
       printf("%d\n", (mx-mn)*2);
   }

  return 0;

}
