#include <bits/stdc++.h>

using namespace std;

int t, A[15], B[15], C[15];
set <int> s;

int main(){

    scanf("%d", &t);
    printf("Lumberjacks:\n");

    while(t--){

        bool f1 = 1;
        bool f2 = 1;

        for(int i=0; i<10; i++)
            scanf("%d", A+i);

        copy(A,A+10,B);
        copy(A,A+10,C);

        sort(B,B+10);
        sort(C,C+10, greater<int>());

        for(int i=0; i<10; i++){
            if(A[i] != B[i])
                f1 = 0;

            if(A[i] != C[i])
                f2 = 0;
        }

        if(f1 || f2)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }

}
