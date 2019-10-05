#include <bits/stdc++.h>

using namespace std;

int x,y;
int main(){
    while(scanf("%d%d", &x,&y), ~x){
        if(x>y)swap(x,y);
        printf("%d\n", min(x-y+100, y-x));
    }

}
