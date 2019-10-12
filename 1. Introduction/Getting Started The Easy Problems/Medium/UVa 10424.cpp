#include <bits/stdc++.h>

using namespace std;

char s1[30],s2[30];
int sum1,sum2;
int main(){
    while(gets(s1)){

        gets(s2);
        sum1=sum2=0;

        for(int i=0; i< strlen(s1); i++){
            if(islower(s1[i])) sum1+= s1[i]-96;
            else if(isupper(s1[i])) sum1+=s1[i]-64;
        }

        if(sum1%9==0) sum1=9;     //to make range from 0-9
        else sum1%=9;

        for(int i=0; i< strlen(s2); i++){
            if(islower(s2[i])) sum2+= s2[i]-96;
            else if(isupper(s2[i])) sum2+=s2[i]-64;
        }

        if(sum2%9==0) sum2=9;
        else sum2%=9;

        if(sum1>sum2)
            printf("%.2f %%\n", sum2*100.0/sum1);
        else
            printf("%.2f %%\n", sum1*100.0/sum2);
    }

}
