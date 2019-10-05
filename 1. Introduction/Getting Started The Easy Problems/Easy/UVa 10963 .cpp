#include <bits/stdc++.h>

using namespace std;

int t,w,x,y,diff,f;
int main(){

    scanf("%d\n", &t);
    while(t--){
        f = 1;
        scanf("%d", &w);
        for(int i=0; i<w; i++){

            scanf("%d%d", &x,&y);

            if(i){
                if(abs(x-y) != diff)f = 0;
            }
            else{
                diff = abs(x-y);
            }
        }
        if(f)
            printf("yes\n");
        else
            printf("no\n");

        if(t)
            puts("");
    }
}
