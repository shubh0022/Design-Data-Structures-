void bubbleSort(int arr[], int n) {
 bool swapped;
 while (true) {
 swapped = false;
 for (int i = 1; i < n; i++) {
 if (arr[i - 1] > arr[i]) {
 int temp = arr[i - 1];
 arr[i - 1] = arr[i];
 arr[i] = temp;
 swapped = true;
 }
 }
 
 if (swapped == false) {
 break;
 }
 }
}
void selectionSort(int arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
 int minIndex = i;
 for (int j = i + 1; j < n; j++) {
 if (arr[j] < arr[minIndex]) {
 minIndex = j;
 }
 }
 
 if (minIndex != i) {
 int temp = arr[i];
 arr[i] = arr[minIndex];
 arr[minIndex] = temp;
 }
 }
}
void insertionSort(int arr[], int n) {
 for (int i = 1; i < n; i++) {
 int key = arr[i];
 int j = i - 1;
 while (j >= 0 && arr[j] > key) {
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 }
}
