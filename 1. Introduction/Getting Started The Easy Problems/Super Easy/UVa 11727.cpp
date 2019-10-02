#include <bits/stdc++.h>

using namespace std;

int t,x;
priority_queue <int> pq;
int main(){

  scanf("%d", &t);
  for(int i=1; i<=t; i++){
    pq = priority_queue <int>();

    for(int j=0; j<3; j++){
        scanf("%d", &x);
        pq.push(x);
    }
    pq.pop();
    printf("Case %d: %d\n", i, pq.top());
  }

  return 0;

}
