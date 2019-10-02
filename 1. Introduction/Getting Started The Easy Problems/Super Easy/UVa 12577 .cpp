#include <bits/stdc++.h>

using namespace std;

char s[10];
int c=0;
int main(){
    while(scanf("%s", s), strcmp(s, "*")){
        c++;
        if(!strcmp(s, "Hajj"))
            printf("Case %d: Hajj-e-Akbar\n", c);
        else
            printf("Case %d: Hajj-e-Asghar\n", c);

    }
}
