#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool uniqueOccurrences(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), compare);

    int counts[1000] = {0};
    int cSize = 0;

    for (int i = 0; i < arrSize; ) {
        int val = arr[i];
        int count = 0;

        while (i < arrSize && arr[i] == val) {
            count++;
            i++;
        }

        for (int j = 0; j < cSize; j++) {
            if (counts[j] == count)
                return false;
        }
        counts[cSize++] = count;
    }

    return true;
}

