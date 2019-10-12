#include <bits/stdc++.h>

using namespace std;

char s[2000005];
pair<char,int> last;
int n, mn;

int main(){

    while(scanf("%d", &n), n){
        scanf("%s", s);
        last = {' ',0};
        mn = 2000005;

        for(int i=0; i<n; i++){
            if(s[i] == '.') continue;

            if(s[i] == 'Z'){
                mn = 0;
                break;
            }

            if(last.first == ' ' || last.first == s[i])
                last = {s[i], i};

            else{
                mn = min(mn, i-last.second);
                last ={s[i],i};
            }

        }
        printf("%d\n", mn);
    }

}
