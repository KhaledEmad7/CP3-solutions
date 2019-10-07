#include <bits/stdc++.h>

using namespace std;

char s[1000005];
int q,x,y,cnt, t=1;

int main(){

    while(~scanf("%s", s)){

        scanf("%d",&q);
        printf("Case %d:\n", t);

        while(q--){
            cnt = 0;
            scanf("%d%d",&x,&y);
            if(x>y)swap(x,y);

            for(int i= x; i<= y; i++){
                if(s[i]== '1')
                    cnt++;
            }
            if(cnt == 0 || cnt == abs(x-y)+1)
                printf("Yes\n");
            else
                printf("No\n");
        }
        t++;
    }

}
