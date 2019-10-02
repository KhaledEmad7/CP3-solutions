#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

char s[N];
int siz;
bool f= true;
int main(){

   while(gets(s)){
        siz = strlen(s);

        for(int i=0; i<siz; i++){
            if(s[i]== '"'){
                if(f)
                    printf("``");

                else
                    printf("''");

                f = !f;

            }
            else printf("%c", s[i]);
        }
        printf("\n");
   }

  return 0;

}
