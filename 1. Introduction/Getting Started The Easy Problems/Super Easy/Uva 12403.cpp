#include <bits/stdc++.h>

using namespace std;

int t,a, total = 0;
char s[10];

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%s", s);
        if(!strcmp(s, "report"))
            printf("%d\n", total);
        else{
            scanf("%d", &a);
            total += a;
        }
    }
}
