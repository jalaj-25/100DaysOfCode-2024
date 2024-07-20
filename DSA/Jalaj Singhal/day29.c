#include<stdio.h>
int max(int *arr, int n) 
{
    int maxc = 0, maxs = 0;
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] > maxs) {
            maxs = arr[i];
        }
        if (maxs == i) {
            maxc++;
        }
    }
    return maxc;
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i = 0; i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int result = max(arr, n);
    printf("RESULT: %d", result);
    return 0;
}
