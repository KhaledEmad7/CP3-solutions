#include <bits/stdc++.h>


using namespace std;


string ans[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",
                "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
int n;
char s[105];
vector <string> v;
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", s);
        v.push_back(s);
    }
   int x = n/16;
   x = (x+1)*16;
   for(int i=0; i<x; i++){
        printf("%s: %s\n", v[i%n].c_str(), ans[i%16].c_str());

   }

}
