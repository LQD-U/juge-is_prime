#include <stdio.h>
#define N 10

void quick_sort(int a[], int start, int close);
int partition(int a[], int start, int close);

int main() {
    int a[N], start = 0, close = N - 1;

    printf("Enter %d numbers:\n", N);

    for (int i = 0; i < N; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    quick_sort(a, start, close);

    printf("Sorted numbers:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void quick_sort(int a[], int start, int close) {
    if (start >= close) {
        return;
    }

    int middle = partition(a, start, close);

    quick_sort(a, start, middle - 1);
    quick_sort(a, middle + 1, close);
}

int partition(int a[], int start, int close) {
    int pivot = a[start];

    while (start < close) {
       
        while (start < close && a[close] >= pivot) {
            close--;
        }
        if (start < close) {
            a[start] = a[close];
        }

       
        while (start < close && a[start] <= pivot) {
            start++;
        }
        if (start < close) {
            a[close] = a[start];
        }
    }

    a[start] = pivot;
    return start;
}
