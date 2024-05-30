#include <stdio.h>
#include <limits.h> //for INT_MAX

void merge_sort(int arr[], int l, int h)
{
    if(l < h){
        int mid =(l+h)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int arr1[n1+1], arr2[n2+1];

    for(int i = 0; i < n1; i++){
        arr1[i] = arr[l+i];
    }
    for(int i = 0; i < n2; i++){
        arr2[i] = arr[mid+1+i];
    }
    arr1[n1] = INT_MAX;
    arr2[n2] = INT_MAX;

    int a = 0, b = 0;
    for(int i = l; i <= h; i++){
        if(arr1[a] < arr2[b]){
            arr[i] = arr1[a];
            a++;
        }
        else{
            arr[i] = arr2[b];
            b++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
