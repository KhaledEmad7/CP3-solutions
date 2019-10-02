#include <bits/stdc++.h>

using namespace std;

int t, n, x, y, diff1, diff2;
pair <int,int> a ;

int main(){

   while(scanf("%d", &t), t){

       scanf("%d%d", &x, &y);
       a = {x,y};

       for(int i=0; i<t; i++){

            scanf("%d%d", &x,&y);

            diff1 = x - a.first;
            diff2 = y - a.second;

            if( !diff1  || !diff2)
                printf("divisa\n");

            else if(diff1>0 && diff2 > 0)
                printf("NE\n");

            else if(diff1<0 && diff2 > 0)
                printf("NO\n");

            else if(diff1 < 0 && diff2 < 0)
                printf("SO\n");

            else
                printf("SE\n");
        }
    }

  return 0;

}
