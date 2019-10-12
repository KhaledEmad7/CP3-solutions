#include <bits/stdc++.h>

using namespace std;

char change(char c){
    if(c=='+')
        return '-';
    return '+';
}

char s[3];
int n;

int main(){
    while(scanf("%d",&n), n){

        string ans="+x";

        for(int i=0; i<n-1; i++){
            scanf("%s", s);
            if(s[0] != 'N'){

                if(ans[1]=='x'){

                    if(ans[0] == '+')
                        ans = s;
                    else
                        ans = change(s[0]), ans+=s[1];
                }

                else if(ans[1] == s[1]){

                    if(ans[0] != s[0])
                        ans = "+x";
                    else
                        ans= "-x";

                }
            }
        }
        printf("%s\n", ans.c_str());
    }
}
