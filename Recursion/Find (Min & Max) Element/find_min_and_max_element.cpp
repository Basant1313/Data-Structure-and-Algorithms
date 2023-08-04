#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

void find_maxi(int arr[], int n, int i, int &maxi) {

  // base case
  if (i >= n) {
    return;
  }

  maxi = max(arr[i], maxi);
  find_maxi(arr, n, ++i, maxi);
  cout << maxi << endl;
}

void find_mini(int arr[], int n, int i, int &mini) {
  // base case
  if (i >= n) {
    return;
  }

  mini = min(arr[i], mini);
  find_mini(arr, n, ++i, mini);
  cout << mini << endl;
}

int main() {

  int arr[] = {6, 7, 2, 1, 3, 9, 5, 4, 8};
  int n = sizeof(arr) / sizeof(int);
  int i = 0;

  int maxi = INT_MIN;
  int mini = INT_MAX;

  find_maxi(arr, n, i, maxi);

  find_mini(arr, n, i, mini);

  return 0;
}