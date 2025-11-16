/**
 * Note: The returned string must be malloced, assume caller calls free().
 */

#include <stdlib.h>
#include <string.h>

char* defangIPaddr(char* address) {
    int len = strlen(address);
    
    // each '.' becomes "[.]" ? +2 extra chars each
    char* result = (char*)malloc((len + 1 + 2 * 3) * sizeof(char)); 
    
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';
        } else {
            result[j++] = address[i];
        }
    }

    result[j] = '\0';
    return result;
}

