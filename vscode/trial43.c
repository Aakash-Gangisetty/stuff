/*Binary search*/
#include <stdio.h>
int main() 
{
    int a[50];
    int n, i, mid;
    int count=0;
    int low, high;
    int search;
    printf("Enter number of array elements: ");
    scanf("%d", &n);
    printf("Enter array elements (sorted in ascending order):\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter search element: ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (search == a[mid]) {
            printf("Element %d found at index %d.\n", search, mid);
            count++;
            break;

        } else if (search < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if(count==0){
    printf("Element not available in the array.\n");
    return 0;
}
}
