#include <stdio.h>
#include <math.h>
 int max(int a, int b) {
 return (a > b) ? a : b;
}
  int knapsack(int weight[], int values[], int n, int capacity) {
  int dp[n + 1][capacity + 1];
for (int i = 0; i <= n; i++) {
for (int w = 0; w <= capacity; w++) {
 if (i == 0 || w == 0) {
 dp[i][w] = 0;
 } else if (weight[i - 1] <= w) {
 dp[i][w] = max(values[i - 1] + dp[i - 1][w - weight[i- 1]], dp[i - 1][w]);
 } else {
 dp[i][w] = dp[i - 1][w];
 }
 }
 }
 return dp[n][capacity];
 }

int main() {
 int weight[] = {2, 3, 4, 5};
  int values[] = {3, 4, 5, 6};

 int n = sizeof(values) / sizeof(values[0]);
 int capacity = 5;
 int result = knapsack(weight, values, n, capacity);
printf("Result is: %d\n", result);
 return 0;
 }
