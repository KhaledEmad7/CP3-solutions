#include <bits/stdc++.h>

using namespace std;

int t,c1,c2,c3;
char s[200];
int main(){
    scanf("%d\n", &t);
    while(t--){
        gets(s);
        c1=c2=c3=0;
        for(int i=0; i<strlen(s); i++){

            if(s[i]=='F' && s[i+1]=='F')
                c1++;
            else if(s[i]=='M' && s[i+1]=='M')
                c2++;

            if(s[i]!=' ')
                c3++,i++;
        }

        if(c1==c2 && c3>1)
            printf("LOOP\n");

        else
            printf("NO LOOP\n");
    }

}
