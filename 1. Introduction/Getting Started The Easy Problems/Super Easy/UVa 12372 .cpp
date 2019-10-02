#include <bits/stdc++.h>

using namespace std;

int t, a;
bool f;
int main(){
    scanf("%d", &t);
    for(int i=1; i<= t; i++){
        f = 1;
        for(int j=0; j<3; j++){
            scanf("%d", &a);
            if(a > 20) f = 0;
        }
        if(f)
            printf("Case %d: good\n", i);

        else
            printf("Case %d: bad\n", i);

    }
}
