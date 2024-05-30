#include <stdio.h>

void quick_sort(int arr[], int l, int h)
{
    if(l < h){
        int j = partition(arr, l, h);
        quick_sort(arr, l, j);
        quick_sort(arr, j+1, h);
    }
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;

    while(i < j){
        do{
            i++;
        } while(arr[i] <= pivot);
        do{
            j--;
        } while(arr[j] > pivot);
        if(i < j){
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    int tmp = arr[l];
    arr[l] = arr[j];
    arr[j] = tmp;
    return j;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
