//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
int lengthOfLongestSubstring(char* s) {
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    int maxLength = 0;
    int start = 0;
    int charIndex[256] = { -1 };
    for (int end = 0; end < n; end++) {
        if (charIndex[(unsigned char)s[end]] >= start) {
            start = charIndex[(unsigned char)s[end]] + 1;
        }
        charIndex[(unsigned char)s[end]] = end; 
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }   
    return maxLength;
}