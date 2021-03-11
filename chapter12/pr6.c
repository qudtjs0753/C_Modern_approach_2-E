#include <stdio.h>

#define N 10

void quicksort(int arr[],int *low,int *high);
int* split(int arr[],int *low,int *high);

int main(void){
    int arr[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0;i < N; i++)
      scanf("%d", &arr[i]);
    quicksort(arr , arr, arr+N-1);
    printf("In sorted order: ");
    for(i = 0; i<N;i++)
      printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void quicksort(int arr[],int *low,int *high){
    int *middle;

    if (low>= high) return;
    middle = split(arr, low, high);
    quicksort(arr, low, middle -1);
    quicksort(arr, middle + 1, high);
}

int* split(int arr[], int *low, int *high){
    
    int part_element = *low;

    for(;;){
        while (low < high && part_element<=*high)
          high--;
        if (low>=high) break;
        *(low++) = *high;

        while(low < high && part_element>=*low)
          low++;
        if(low>=high) break;
        *(high--) = *low;
    }

    *high = part_element;

    return high;
}