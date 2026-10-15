//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left;
    
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[right]);
    return i;
}
int quickSelect(int arr[], int left, int right, int k) {
    if (k > 0 && k <= right - left + 1) {
        int pivotIndex = partition(arr, left, right);
        if (pivotIndex - left == k - 1) {
            return arr[pivotIndex];
        }
        if (pivotIndex - left > k - 1) {
            return quickSelect(arr, left, pivotIndex - 1, k);
        }
        return quickSelect(arr, pivotIndex + 1, right, k - (pivotIndex - left + 1));
    }
    return -1; 
}
int main() {
    int n, k;
    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid value of k. It must be between 1 and %d.\n", n);
        return 1;
    }
    int result = quickSelect(arr, 0, n - 1, k);
    printf("The %d-th smallest element is: %d\n", k, result);

    return 0;
}
