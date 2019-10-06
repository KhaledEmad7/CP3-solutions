#include <bits/stdc++.h>

using namespace std;

int h, d ,f;
double u;
bool flag;
int main(){

    while(scanf("%d%lf%d%d", &h, &u, &d, &f), h){
        int day = 0;
        double curDis = 0, factor = u*(f/100.0);
        while(1){
            day++;
            curDis += u;       //Day
            if(curDis > h){
                flag = 1;
                break;
            }

            u -=  factor;     //Night
            curDis -= d;
            if(u<0)u=0;

            if(curDis<0){
                flag = 0;
                break;
            }
        }
    if(flag)
        printf("success on day %d\n", day);
    else
        printf("failure on day %d\n", day);

    }
}
