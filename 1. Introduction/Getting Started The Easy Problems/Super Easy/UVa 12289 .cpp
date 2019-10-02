#include <bits/stdc++.h>

using namespace std;

int t, c;
char s[10];
int main(){

    scanf("%d", &t);
    while(t--){
        scanf("%s", s);
        c = 0;

        if(strlen(s)==5)
            printf("3\n");

        else{
            c+= (s[0]=='o') + (s[1]=='n') + (s[2]=='e');

            if(c>=2)
                printf("1\n");
            else
                printf("2\n");
        }
    }
}
