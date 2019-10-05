#include <bits/stdc++.h>

using namespace std;

vector <string> v;
int t, n;
char s[105];

int main(){
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int mx = -1;

        for(int j=0; j<10; j++){
            scanf("%s %d", s,&n);
            if(n>mx){
                mx = n;
                v.clear();
                v.push_back(s);
            }
            else if(n == mx)
                v.push_back(s);
        }
        printf("Case #%d:\n", i);
        for(string x: v)
            printf("%s\n" , x.c_str());
    }

}
