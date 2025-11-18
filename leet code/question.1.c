#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char * s) {
    int len = strlen(s);
    char *stack = (char *)malloc(len);  // stack to store open brackets
    int top = -1;                       // empty stack initially

    for (int i = 0; i < len; i++) {
        char ch = s[i];

        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } 
        else {
            // If closing bracket but stack empty ? invalid
            if (top == -1) {
                free(stack);
                return false;
            }

            char topChar = stack[top--];  // pop from stack

            // Check for matching pairs
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool isValid = (top == -1);  // all brackets matched
    free(stack);
    return isValid;
}
