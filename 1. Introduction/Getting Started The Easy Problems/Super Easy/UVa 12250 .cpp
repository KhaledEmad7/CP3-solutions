#include <bits/stdc++.h>

using namespace std;

char s[15];
int c=0;
int main(){

  while(scanf("%s", s), strcmp(s,"#")){
        c++;
        if(!strcmp(s,"HELLO"))
            printf("Case %d: ENGLISH\n", c);

        else if(!strcmp(s,"HOLA"))
            printf("Case %d: SPANISH\n", c);

        else if(!strcmp(s,"HALLO"))
            printf("Case %d: GERMAN\n", c);

        else if(!strcmp(s,"BONJOUR"))
            printf("Case %d: FRENCH\n", c);

        else if(!strcmp(s,"CIAO"))
            printf("Case %d: ITALIAN\n", c);

        else if( !strcmp(s, "ZDRAVSTVUJTE"))
            printf("Case %d: RUSSIAN\n", c);
        else
            printf("Case %d: UNKNOWN\n", c);

  }
  return 0;

}
