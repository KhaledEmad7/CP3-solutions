#include <bits/stdc++.h>

using namespace std;

char s[15];
string ans;
int c;

void solve(int sum){
        if(sum<int(10)){
            printf("%d\n", sum);
            return;
        }

        ans = to_string(sum);
        sum = 0;
        for(int i=0; i< ans.size(); i++){
            sum += ans[i]-'0';
        }
        solve(sum);

}

int main(){
    while(scanf("%s", s), s[0]-'0'){
        int sum=0;
        for(int i=0; i< strlen(s); i++){
            sum += s[i]-'0';
        }
        solve(sum);
    }

}
