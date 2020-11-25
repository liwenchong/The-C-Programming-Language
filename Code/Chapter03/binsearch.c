#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);

int main()
{
    int x = 80;
    int n = 10;
    int v[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    clock_t start, end;
    start = clock();
    printf("%d\n", binsearch(x, v, n) + 1);
    end = clock();
    printf("time = %f\n",difftime(end, start));

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}