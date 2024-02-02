#include <stdio.h>

int binary_search(int n, int vv[], int s)
{
    int mid, left = 0, right = n -1;

    while(left <= right){
        mid = (left + right)/2;

        if(vv[mid] == s){
            return mid;
        }
        if(vv[mid] > s){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int n, x, r;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    r = binary_search(n, arr, x);

    if(r)printf("%d\n", r);
    else printf("Not Found\n");
}
