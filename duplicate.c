//Chp 12
/*Write a function duplicate() that uses dynamic storage allocation to creat a copy of a
string. For example, the call:
p = duplicate(str);
Would allocate space for a string of the same length as str, copy the contents of str into the
new string, and return a pointer to it. Have duplicate() return a null pointer if the
memory allocation fails.
Test the function by writing a main() function which calls the duplicate() function twice,
first with the string “This is a test”, and a second time with a the string “Hello from the
duplicate!”. After each call, print the return value from duplicate(), and then free the
memory associated with the return value.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(const char* str) {
    if (str == NULL) // Check for null input
        return NULL;
    
    size_t length = strlen(str);
    char* new_str = (char*)malloc((length + 1) * sizeof(char)); // Allocate memory for new string
    
    if (new_str == NULL) // Check if memory allocation fails
        return NULL;

    strcpy(new_str, str); // Copy contents of str to new_str
    return new_str;
}

int main() {
    const char* str1 = "This is a test";
    const char* str2 = "Hello from the duplicate!";

    char* p1 = duplicate(str1);
    if (p1 != NULL) {
        printf("Duplicate of '%s': %s\n", str1, p1);
        free(p1); // Free memory associated with p1
    } else {
        printf("Memory allocation failed for '%s'\n", str1);
    }

    char* p2 = duplicate(str2);
    if (p2 != NULL) {
        printf("Duplicate of '%s': %s\n", str2, p2);
        free(p2); // Free memory associated with p2
    } else {
        printf("Memory allocation failed for '%s'\n", str2);
    }

    return 0;
}

