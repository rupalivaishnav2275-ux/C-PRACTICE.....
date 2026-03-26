// Program: Conditional Statements in C
// Description: Demonstrates all conditional statements with examples and practice questions.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and practice)
// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Write code in VS Code
// 2. Open Terminal (Ctrl + `)
// 3. Compile:
//    gcc 05-conditional-statements.c -o cond
// 4. Run:
//    cond

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Conditional Statements:
// Used to make decisions in a program based on conditions.

// Types:
// 1. if
// 2. if-else
// 3. else-if ladder
// 4. nested if
// 5. switch
// 6. ternary operator (conditional operator)

// ======================================================
// 🔹 1️⃣ IF STATEMENT
// ======================================================

// Syntax:
// if(condition) {
//     // code
// }

// ======================================================
// 🔹 2️⃣ IF-ELSE STATEMENT
// ======================================================

// Syntax:
// if(condition) {
//     // true block
// } else {
//     // false block
// }

// ======================================================
// 🔹 3️⃣ ELSE-IF LADDER
// ======================================================

// Syntax:
// if(condition1) {
// }
// else if(condition2) {
// }
// else {
// }

// ======================================================
// 🔹 4️⃣ NESTED IF
// ======================================================

// if inside another if

// ======================================================
// 🔹 5️⃣ SWITCH STATEMENT
// ======================================================

// Syntax:
// switch(expression) {
//     case value1:
//         break;
//     case value2:
//         break;
//     default:
// }

// ======================================================
// 🔹 6️⃣ TERNARY OPERATOR 
// ======================================================

// Definition:
// Short form of if-else

// Syntax:
// condition ? expression1 : expression2;

// Example:
// max = (a > b) ? a : b;

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes: 
// - I understood that conditional statements help in decision making in programs
// - I noticed that every condition returns 0 (false) or 1 (true)
// - I practiced different cases to understand how program flow changes
// - This topic helped me control the flow of execution based on conditions

// Important Points:
// - I learned to use '==' for comparison and '=' for assignment
// - break is important in switch to stop execution of other cases
// - Ternary operator is useful for short and simple conditions

// Mistakes:
// - I used '=' instead of '==' and got wrong results
// - I forgot break in switch and multiple cases executed
// - I wrote incorrect conditions and got unexpected output

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <stdio.h>

int main() {

    int a = 10, b = 20;

    // ==================================================
    // 🔹 IF STATEMENT
    // ==================================================

    printf("\n--- IF STATEMENT ---\n");
    if (a < b) {
        printf("a is less than b\n");
    }

    // ==================================================
    // 🔹 IF-ELSE
    // ==================================================

    printf("\n--- IF-ELSE ---\n");
    if (a > b) {
        printf("a is greater\n");
    } else {
        printf("b is greater\n");
    }

    // ==================================================
    // 🔹 ELSE-IF LADDER
    // ==================================================

    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\n--- ELSE-IF LADDER ---\n");
    if (num > 0) {
        printf("Positive number\n");
    }
    else if (num < 0) {
        printf("Negative number\n");
    }
    else {
        printf("Zero\n");
    }

    // ==================================================
    // 🔹 NESTED IF
    // ==================================================

    printf("\n--- NESTED IF ---\n");
    if (num > 0) {
        if (num % 2 == 0) {
            printf("Even number\n");
        } else {
            printf("Odd number\n");
        }
    }

    // ==================================================
    // 🔹 SWITCH CASE
    // ==================================================

    int day;
    printf("\nEnter day number (1-3): ");
    scanf("%d", &day);

    printf("\n--- SWITCH CASE ---\n");
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    // ==================================================
    // 🔹 TERNARY OPERATOR
    // ==================================================

    printf("\n--- TERNARY OPERATOR ---\n");
    int max = (a > b) ? a : b;
    printf("Max = %d\n", max);

    // ==================================================
    // 🔹 PRACTICE 1: ARMSTRONG NUMBER
    // ==================================================

    printf("\nChecking Armstrong number logic...\n");
    int n, original, remainder, result = 0;
    printf("\nEnter a number (Armstrong check): ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if (result == original) {
        printf("Armstrong Number\n");
    } else {
        printf("Not Armstrong Number\n");
    }

    // ==================================================
    // 🔹 PRACTICE 2: NATURAL NUMBER CHECK
    // ==================================================

    int num2;
    printf("\nEnter a number (Natural check): ");
    scanf("%d", &num2);

    if (num2 > 0) {
        printf("Natural Number\n");
    } else {
        printf("Not a Natural Number\n");
    }

    return 0;
}
