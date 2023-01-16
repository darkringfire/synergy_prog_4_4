#include <iostream>
#define NMAX 100

int main() {
    int n;
    int arr[NMAX];
    do {
        printf("Enter number of items (1..%i):", NMAX);
        scanf("%i", &n);
    } while (n < 1 || n > NMAX);
    for (int i = 0; i < n; i++) {
        printf("Enter item %i:", i);
        scanf("%i", &arr[i]);
    }

    int min, max, sum;
    float avg;
    min = max = sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
        sum += arr[i];
    }
    avg = (float)sum / (float)n;
    printf("min = %i\nmax = %i\nsum = %i\navg = %f\n", min, max, sum, avg);
    return 0;
}
