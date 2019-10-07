#include <bits/stdc++.h>

using namespace std;

char s[100], trash[100];
int n, p, r, cnt = 1;
double d;
pair<double, int> mx;
string ans, nline = "";

int main(){

    while (scanf("%d %d", &n, &p), n)
    {
        cout << nline;
        nline = "\n";
        mx={0,-1};
        gets(trash);

        for (int i = 0; i < n; ++i)
            gets(trash);

        while (p--)
        {
            gets(s);
            scanf("%lf %d", &d, &r);
            gets(trash);

            for (int i = 0; i < r; ++i)
                gets(trash);


            if (r > mx.second || (r == mx.second && d < mx.first))
            {
                ans = s;
                mx = {d,r};
            }
        }

        printf("RFP #%d\n%s\n", cnt, ans.c_str());
        cnt++;
    }
}
