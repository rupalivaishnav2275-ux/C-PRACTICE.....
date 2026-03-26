// Program: Loops in C
// Description: Demonstrates all looping concepts, keywords, and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and understanding)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 06-loops.c -o loops
// 4. Run:
//    loops

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Loop:
// A loop is used to execute a block of code repeatedly.

// Types of Loops:
// 1. for loop
// 2. while loop
// 3. do-while loop

// Keywords:
// break → exits loop
// continue → skips current iteration

// ======================================================
// 🔹 INCREMENT & DECREMENT
// ======================================================

// ++ → Increment
// -- → Decrement

// Types:
// Pre-increment  → ++i
// Post-increment → i++

// Example:
// int i = 5;
// printf("%d", ++i); // 6
// printf("%d", i++); // 6 (then becomes 7)

// ======================================================
// 🔹 1️⃣ FOR LOOP
// ======================================================

// Syntax:
// for(initialization; condition; update) {
//     // code
// }

// ======================================================
// 🔹 2️⃣ WHILE LOOP
// ======================================================

// Syntax:
// while(condition) {
//     // code
// }

// ======================================================
// 🔹 3️⃣ DO-WHILE LOOP
// ======================================================

// Syntax:
// do {
//     // code
// } while(condition);

// ======================================================
// 🔹 INFINITE LOOP
// ======================================================

// for(;;) {
//     // runs forever
// }

// ======================================================
// 🔹 NESTED LOOP
// ======================================================

// A loop inside another loop

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understand that loops help execute code multiple times without repetition
// - I noticed that different loops (for, while, do-while) are used in different situations
// - I practiced multiple examples to understand loop behavior and flow

// Important Points:
// - for loop is best when number of iterations is known
// - while loop is useful when condition is based
// - do-while loop runs at least once even if condition is false
// - break exits the loop and continue skips an interation

// Mistakes:
// - I created infinite loops by missing update condition
// - I used wrong loop conditions and got incorrect output
// - I forgot how break and continue affect loop flow

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>

// ======================================================
// 🔹 FUNCTION: Fibonacci Series
// ======================================================

void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("\nGenerating Fibonacci series using function...\n");
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {

    // ==================================================
    // 🔹 FOR LOOP
    // ==================================================

    printf("\n--- FOR LOOP ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // ==================================================
    // 🔹 WHILE LOOP
    // ==================================================

    printf("\n\n--- WHILE LOOP ---\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    // ==================================================
    // 🔹 DO-WHILE LOOP
    // ==================================================

    printf("\n\n--- DO-WHILE LOOP ---\n");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j <= 5);

    // ==================================================
    // 🔹 BREAK & CONTINUE
    // ==================================================

    printf("\n\n--- BREAK ---\n");
    for (int k = 1; k <= 10; k++) {
        if (k == 5) break;
        printf("%d ", k);
    }

    printf("\n\n--- CONTINUE ---\n");
    for (int k = 1; k <= 5; k++) {
        if (k == 3) continue;
        printf("%d ", k);
    }

    // ==================================================
    // 🔹 FLOAT LOOP COUNTER
    // ==================================================

    printf("\n\n--- FLOAT LOOP ---\n");
    for (float f = 1.0; f <= 3.0; f++) {
        printf("%.1f ", f);
    }

    // ==================================================
    // 🔹 CHARACTER LOOP COUNTER
    // ==================================================

    printf("\n\n--- CHAR LOOP ---\n");
    for (char ch = 'A'; ch <= 'E'; ch++) {
        printf("%c ", ch);
    }

    // ==================================================
    // 🔹 INFINITE LOOP (COMMENTED)
// ==================================================

    // for(;;) {
    //     printf("Infinite Loop\n");
    // }

    // ==================================================
    // 🔹 PRACTICE 1: PRIME NUMBER CHECK
    // ==================================================

    int num, isPrime = 1;
    printf("\n\nEnter a number: ");
    scanf("%d", &num);

    if (num <= 1) isPrime = 0;

    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    // ==================================================
    // 🔹 PRACTICE 2: PRIME NUMBERS IN RANGE
    // ==================================================

    int start, end;
    printf("\nEnter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers: ");
    for (int n = start; n <= end; n++) {
        int prime = 1;

        if (n <= 1) prime = 0;

        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) printf("%d ", n);
    }

    // ==================================================
    // 🔹 PRACTICE 3: NESTED LOOP PATTERN
    // ==================================================

    printf("\n\n--- PATTERN ---\n");
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("*");
        }
        printf("\n");
    }

    // ==================================================
    // 🔹 PRACTICE 4: FIBONACCI FUNCTION
    // ==================================================

    int terms;
    printf("\nEnter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}
