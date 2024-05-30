#include <stdio.h>

void selection_sort(int n, int arr[])
{
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            int tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
}

int main()
{
    int s;
    scanf("%d", &s); int arr[s];

    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }
    selection_sort(s, arr);

    for(int i = 0; i < s; i++){
        printf("%d\t", arr[i]);
    }
}
