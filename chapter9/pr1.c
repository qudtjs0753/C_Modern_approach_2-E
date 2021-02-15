#include <stdio.h>
#include <ctype.h>

int selection_sort(int a[], int n);

int main(void){
    int arr[3] = {3, 10 ,6};
    selection_sort(arr, 3);
    printf("%d, %d, %d",arr[0], arr[1], arr[2]);

    return 0;
}

int selection_sort(int a[], int n){
    int max,index,temp,i;
    max = a[0];
    temp = a[n-1];

    for(i=0;i<n;i++){
      if(a[i]>max){
          max = a[i];
          index = i;
      }
    }
    if(n==0){
        return 0;
    }
    a[index] = a[n-1];
    a[n-1] = max;
    selection_sort(a,n-1);
}