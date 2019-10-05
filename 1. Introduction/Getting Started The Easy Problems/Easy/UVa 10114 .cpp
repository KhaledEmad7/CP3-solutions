#include <bits/stdc++.h>

using namespace std;

int dur, records, m;
double down, loan, dep[105], p;
int main() {

    //for more clarification: https://www.quora.com/How-do-I-solve-problem-10114-Loansome-Car-Buyer-on-UVa-Online-Judge

	while (scanf("%d %lf %lf %d", &dur, &down, &loan, &records), dur>-1) {

		while (records--) {
			scanf("%d %lf",&m,&p);
			for (int i = m; i < 105; i++)
				dep[i] = p;
		}

		int c = 0;
		double permonth = loan / dur;
		double val = (loan + down) * (1 - dep[0]);
		double curLoan = loan;
		while (val < curLoan) {
			c++;
			curLoan -= permonth;
			val = val * (1-dep[c]);
		}

		printf("%d month", c);
		if (c != 1)
			printf("s\n");
		else
            puts("");
	}

	return 0;
}
