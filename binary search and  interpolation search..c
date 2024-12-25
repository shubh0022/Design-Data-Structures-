#include<bits/stdc++.h>
using namespace std;
int interpolation_search(int arr[],int target, int n){
int low = 0;
 int high = n - 1;
 while (low <= high && target >= arr[low] && target <= arr[high]){
 // Calculate the position of the target element based on its value
 int pos = low + (((target - arr[low]) * (high - low)) / (arr[high] - arr[low]));
 // Check if the target element is at the calculated position
 if( arr[pos] == target){
 return pos;
 }
 // If the target element is less than the element at the calculated position, search the 
left half of the list
 if(arr[pos] > target){
 high = pos - 1;
 }
 else{
 // If the target element is greater than the element at the calculated position, 
search the right half of the list
 low = pos + 1;
 }
 }
 return -1;
}
int main(){
 
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
 int n = sizeof(arr)/sizeof(int);
 int target = 5;
 int index = interpolation_search(arr, target, n);
 
 // cout << index << endl;
 if(index == -1){
 cout << target << " not found in the list" << endl;
 }
 else{
 cout << target << " found at index " << index << endl;
 }
}
