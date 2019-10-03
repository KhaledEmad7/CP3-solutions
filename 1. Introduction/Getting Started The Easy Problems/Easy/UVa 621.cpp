#include <bits/stdc++.h>

using namespace std;

int t,siz;
char s[100000];
int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%s", s);
        siz = strlen(s);

        if (!(strcmp(s,"1")) || !(strcmp(s,"4")) || !(strcmp(s,"78")))
            printf("+\n");

        else if( s[siz-1]== '5' && s[siz-2] == '3')
            printf("-\n");

        else if( s[siz-1] == '4' && s[0] == '9' )
            printf("*\n");

        else
            printf("?\n");

    }
}
