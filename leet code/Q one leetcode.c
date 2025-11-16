/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

typedef struct {
    int key;
    int val;
} Pair;

int hash(int key, int size) {
    // simple hash
    if (key < 0) key = -key;
    return key % size;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int size = numsSize * 2; 
    Pair* map = (Pair*)calloc(size, sizeof(Pair));
    
    // initialize map keys to a special marker
    for (int i = 0; i < size; i++) {
        map[i].key = 2147483647;  // empty marker (INT_MAX)
    }
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int h = hash(complement, size);
        
        // search complement in hash table (linear probing)
        while (map[h].key != 2147483647) {
            if (map[h].key == complement) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = map[h].val;
                result[1] = i;
                *returnSize = 2;
                free(map);
                return result;
            }
            h = (h + 1) % size;
        }

        // insert current number
        int h2 = hash(nums[i], size);
        while (map[h2].key != 2147483647) {
            h2 = (h2 + 1) % size;
        }
        map[h2].key = nums[i];
        map[h2].val = i;
    }

    *returnSize = 0;
    free(map);
    return NULL;
}

