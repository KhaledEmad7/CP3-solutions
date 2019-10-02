#include <bits/stdc++.h>

using namespace std;

int t,n,siz;
string s;

int main(){

  scanf("%d", &t);
  while(t--){
    scanf("%d", &n);
    s =  to_string((((n*567/9)+7492)*235/47)-498);
    siz = s.size();

    printf("%c\n", s[siz-2]);

  }

  return 0;

}
