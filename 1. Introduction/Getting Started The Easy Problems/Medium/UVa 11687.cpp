#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char s[1000005];
string last, cur;

int main(){
    while(scanf("%s",s), strcmp("END",s)){
        int cnt = 1;
        last = s;
        while(1){
            if(last == to_string(last.size()))
                break;
            last = to_string(last.size());
            cnt++;
        }
        printf("%d\n", cnt);
    }
}
