#include <stdio.h>

int chef_tv_cost(int n, int x) {
  int num_subscriptions = (n + 5) / 6;
  int total_cost = num_subscriptions * x;
  return total_cost;
}

int main() {
  int t, n, x;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &x);
    printf("%d\n", chef_tv_cost(n, x));
  }

  return 0;
}




