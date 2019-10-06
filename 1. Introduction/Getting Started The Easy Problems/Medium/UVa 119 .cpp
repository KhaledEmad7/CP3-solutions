#include <bits/stdc++.h>

using namespace std;

vector <string> names;
map <string, int> mp;
char s[15];
int n, x, y, give, rem;
bool flag = 0;

int main(){
    while(~scanf("%d", &n)){
         if(flag)
                puts("");
        flag = 1;

        for(int i=0; i<n; i++){
                scanf("%s", s);
                names.push_back(s);
        }

        for(int i=0; i<n; i++){

            scanf("%s %d %d", s, &x, &y);
            if(!y) continue;
            give = x/y;
            rem = x%y;
            mp[s]-=(x-rem);
            for(int j=0; j<y; j++){
                scanf("%s", s);
                mp[s]+=give;
            }
        }

        for(auto ans: names)
            printf("%s %d\n", ans.c_str(), mp[ans]);

        names.clear();
        mp.clear();
    }
}
