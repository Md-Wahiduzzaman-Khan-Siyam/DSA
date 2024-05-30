#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, j, itm;

    for(i = 1; i < n; i++){
        itm = arr[i];
        j = i - 1;
        while(j >= 0 && itm < arr[j]){
            arr[j + 1] = arr[j];
            //arr[j] = itm;
            j--;
        }
        arr[j + 1] = itm;
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
    insertion_sort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}
