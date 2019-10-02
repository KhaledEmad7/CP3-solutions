#include <bits/stdc++.h>

using namespace std;

int pos,a,b,c,ans;
int main(){
   while(scanf("%d%d%d%d", &pos, &a, &b, &c), pos || a || b|| c){
       ans = (pos-a+40)%40 + (b-a+40)%40 + (b-c+40)%40 ;
       ans+= 120;            //three full cycles
       printf("%d\n", ans*9);
   }

  return 0;

}
