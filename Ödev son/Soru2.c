#include <stdio.h>

int minimum(int arr[], int n) {
	int i;
    int min = arr[0];  // 1 //
    for (i = 1; i < n; i++) { // (1 , n , n-1) = 2n // 
        if (arr[i] < min) {     // n-1 //
            min = arr[i];        // n-1 //
        }
    }
    return min;           // 1 //

// T(n)= 4n-1//
}

int main() {
    int arr[] = {3, 1, 4, 2, 5};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    int min = minimum(arr, n); 
    printf("En kucuk eleman: %d", min);
    return 0; 
}
