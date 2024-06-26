#include <stdio.h>

void bubble_sort(int x, int arr[])
{
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
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
    bubble_sort(n, arr);

    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}
