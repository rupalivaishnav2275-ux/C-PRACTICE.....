// Program: Strings in C 
// Description: Demonstrates string concepts, operations, functions,and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own understanding and practice)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 11-strings.c -o strings
// 4. Run:
//    strings

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// String:
// A sequence of characters stored in an array and terminated by '\0'
// (null character).

// Example:
// char name[] = "Rupali";

// Internally:
// {'R','u','p','a','l','i','\0'}

// ======================================================
// 🔹 SYNTAX & DECLARATION
// ======================================================

// char str[size];

// Example:
// char name[20];

// ======================================================
// 🔹 INITIALIZATION
// ======================================================

// char name[] = "Rupali";
// char name[10] = {'R','u','p','a','l','i','\0'};

// ======================================================
// 🔹 INPUT / OUTPUT
// ======================================================

// Input (single word):
// scanf("%s", str);

// Input (full sentence):
// fgets(str, sizeof(str), stdin);

// Output:
// printf("%s", str);

// ======================================================
// 🔹 STRING TRAVERSAL
// ======================================================

// Access characters one by one

// for (int i = 0; str[i] != '\0'; i++)

// ======================================================
// 🔹 STRING FUNCTIONS
// ======================================================

// strlen()  → find length
// strcpy()  → copy string
// strcat()  → concatenate
// strcmp()  → compare

// Requires:
// #include <string.h>

// ======================================================
// 🔹 STRINGS AND POINTERS
// ======================================================

// char *ptr = str;
// *(ptr + i) == str[i]

// ======================================================
// 🔹 STRINGS AS FUNCTION ARGUMENT
// ======================================================

// Strings are passed as pointers to functions.

// Example:
// void display(char str[]);

// ======================================================
// 🔹 KEY CONCEPTS
// ======================================================

// ✔ Strings are character arrays
// ✔ '\0' marks end of string
// ✔ fgets() is safer than scanf()
// ✔ Strings are passed as pointers to functions

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood how strings are stored and traversed
// - Learned to manipulate strings using loops and conditions
// - Practiced modular string operations using functions

// Important Points:
// - Always remove newline from fgets()
// - Ensure buffer size is sufficient
// - Use string.h for built-in functions
// - ASCII values help in character manipulation

// Mistakes:
// - Forgetting '\0'
// - Buffer overflow issues
// - Using unsafe functions like gets()
// - Not handling newline from fgets()

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>
#include <string.h>

// Utility
void removeNewline(char str[]);

// Practice functions
void convertVowelsToUpper(char str[]);
void highestFrequencyChar(char str[]);
void removeSpaces(char str[]);
void toggleCase(char str[]);

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeNewline(str);

    printf("\nOriginal String: %s\n", str);

    // ==================================================
    // 🔹 PRACTICE 1: VOWELS TO UPPERCASE
    // ==================================================

    char temp1[100];
    strcpy(temp1, str);

    convertVowelsToUpper(temp1);
    printf("\nVowels to Uppercase: %s\n", temp1);

    // ==================================================
    // 🔹 PRACTICE 2: HIGHEST FREQUENCY CHARACTER
    // ==================================================

    highestFrequencyChar(str);

    // ==================================================
    // 🔹 PRACTICE 3: REMOVE SPACES
    // ==================================================

    char temp2[100];
    strcpy(temp2, str);

    removeSpaces(temp2);
    printf("\nWithout Spaces: %s\n", temp2);

    // ==================================================
    // 🔹 PRACTICE 4: TOGGLE CASE
    // ==================================================

    char temp3[100];
    strcpy(temp3, str);

    toggleCase(temp3);
    printf("\nToggle Case: %s\n", temp3);

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// Remove newline from fgets
void removeNewline(char str[]) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Convert lowercase vowels to uppercase
void convertVowelsToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
            str[i] = str[i] - 32; // ASCII conversion
        }
    }
}

// Find highest frequency character
void highestFrequencyChar(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    int max = 0;
    char result;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > max && i != ' ') {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("\nHighest frequency character: '%c' (%d times)\n", result, max);
}

// Remove spaces from string
void removeSpaces(char str[]) {
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Toggle case (lower ↔ upper)
void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
