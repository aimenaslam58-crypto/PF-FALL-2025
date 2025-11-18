int lengthOfLastWord(char* s) {
    int length = 0;
    int i = strlen(s) - 1;

    // Step 1: skip trailing spaces
    while (i >= 0 && s[i] == ' ')
        i--;

    // Step 2: count characters of last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
