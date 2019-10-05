#include <bits/stdc++.h>

using namespace std;


int t, n, idx, pos;
string s;
vector <string> v;

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        pos = 0;
        while(n--){
            cin>>s;
            if(s == "SAME"){
                cin>>s;         //AS
                scanf("%d", &idx);
                s = v[--idx];
                v.push_back(s);
            }
            else
                v.push_back(s);


            if(s == "RIGHT")
                pos++;
            else
                pos--;
        }
        v.clear();

        printf("%d\n", pos);

    }

}
