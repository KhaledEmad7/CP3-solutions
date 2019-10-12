#include <bits/stdc++.h>

using namespace std;

int z,y;
int l;
char s[3];
int main(){
    while(scanf("%d", &l), l){
        for(int i=0; i<l-1; i++){
            scanf("%s", s);
            if(s[1]=='y')
                if(s[0]=='+')
                    y++;
                else
                    y--;

            if(s[1]=='z')
                if(s[0]=='+')
                    z++;
                else
                    z--;

        }
        cout<<y<<"   "<<z<<endl;

    }

}
