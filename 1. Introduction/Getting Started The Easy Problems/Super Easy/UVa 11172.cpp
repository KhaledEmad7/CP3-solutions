#include <bits/stdc++.h>

using namespace std;

int t,x,y;
int main(){

   scanf("%d", &t);
   while(t--){
       scanf("%d%d", &x, &y);
       if(x>y)
            printf(">\n");
       else if(y>x)
            printf("<\n");
       else
            printf("=\n");
   }

  return 0;

}
