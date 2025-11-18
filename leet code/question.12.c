char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    // result length will be at most max(len(a), len(b)) + 1
    int maxLen = (strlen(a) > strlen(b) ? strlen(a) : strlen(b)) + 1;
    char* result = (char*)malloc(maxLen + 1); // +1 for null terminator
    result[maxLen] = '\0';  // null terminate

    int k = maxLen - 1;  // write from end

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0 ? a[i] - '0' : 0);
        int bitB = (j >= 0 ? b[j] - '0' : 0);

        int sum = bitA + bitB + carry;
        result[k] = (sum % 2) + '0';  // write the output bit
        carry = sum / 2;             // update carry

        i--;
        j--;
        k--;
    }

    // If k == -1 ? result starts from position 0
    // Else ? result starts from k + 1
    return &result[k + 1];
}
