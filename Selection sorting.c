#include <stdio.h>

int main() {
  int arr[100], n, i, j, min_idx, temp;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Selection sort algorithm
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    // Swap the found minimum element with the element at i
    temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
  }

  printf("Sorted array: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
