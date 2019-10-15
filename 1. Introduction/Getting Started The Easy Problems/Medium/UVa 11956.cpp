#include <bits/stdc++.h>

using namespace std;

char in[100005];
int t, A[101];

int main(){
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        memset(A, 0, sizeof A);
        int idx = 0;
       scanf("%s", in);
        for(int j=0; j<strlen(in); j++){
            if(in[j]=='>'){
                idx++;
                if(idx == 100)
                    idx = 0;
            }
            else if(in[j]=='<'){
                idx--;
                if(idx<0)
                    idx = 99;
            }
            else if(in[j] == '+'){
                A[idx]++;
                if(A[idx] == 256)
                    A[idx]=0;
            }

            else if(in[j]=='-'){
                A[idx]--;
                if(A[idx]==-1)
                    A[idx]=255;
            }

        }
        printf("Case %d:", i+1);
        for(int j=0; j<100; j++)
            printf(" %02X", A[j]);
        puts("");
    }
}
