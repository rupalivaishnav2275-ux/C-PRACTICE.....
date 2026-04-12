// Program: Variables And Data Types in C
// Description: Demonstrates variables, data types, constants, input/output, and practice questions.
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
//    gcc 02-variables.c -o variables
// 4. Run:
//    variables

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Variable: Stores a value that can change during execution.
// Data Types: Specifies the type of data a variable can store.
// Constant: Fixed value that cannot be changed during execution.
// Comments: Lines ignored by the compiler, used for explanation.
// Compilation: Process of converting C code into machine code using a compiler.

// ======================================================
// 🔹 DATA TYPES (WITH SIZE)
// ======================================================

// | Data Type       | Size (bytes) |
// |----------------|-------------|
// | int            | 4           |
// | float          | 4           |
// | double         | 8           |
// | char           | 1           |
// | short int      | 2           |
// | long int       | 4 or 8      |
// | long long int  | 8           |
// | unsigned int   | 4           |
// | signed int     | 4           |
// | void           | 0           |
// | bool (_Bool)   | 1           |

// ======================================================
// 🔹 CONSTANTS
// ======================================================

// 1. Integer Constant → 10, -5, 100
// 2. Real Constant → 3.14, 2.5
// 3. Character Constant → 'A', 'b', '%'

// ======================================================
// 🔹 KEYWORDS (32 in C)
// ======================================================

// | auto | break | case | char | const | continue |
// | default | do | double | else | enum | extern |
// | float | for | goto | if | int | long |
// | register | return | short | signed | sizeof | static |
// | struct | switch | typedef | union | unsigned | void |
// | volatile | while |

// ======================================================
// 🔹 COMMENTS
// ======================================================

// Single-line comment → //
// Multi-line comment → /* */

// ======================================================
// 🔹 OUTPUT
// ======================================================

// printf() is used for output

// Format Specifiers:
// %d → integer
// %f → float
// %c → character

// Examples:
// printf("%d", 10);
// printf("%f", 3.14);
// printf("%c", 'A');

// ======================================================
// 🔹 INPUT
// ======================================================

// scanf() is used for input

// Example: Sum of two numbers
/*
int x, y;
scanf("%d %d", &x, &y);
int sum = x + y;
printf("Sum = %d", sum);
*/

// ======================================================
// 🔹 COMPILATION
// ======================================================

// gcc file_name.c -o output_name
// ./output_name

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood that int stores whole numbers only
// - float helps store decimal values like 3.14
// - char is used for single characters
// - printf() displays output on screen
// - This topic helped me understand how data is stored and used in programs

// Important Points:
// - %d is used for int 
// - %f is used for float 
// - %c is used for char
// - Variables can be reassigned
// - I noticed that scanf() needs '&' to store value in variable
// - Integer division removes decimal part (e.g., 7/2 = 3)

// Mistakes:
// - I forgot format specifiers and got incorrect output
// - I missed '&' in scanf which caused errors
// - I confused %d (int) with %f (float)

#include <stdio.h>

int main () {

// ======================================================
// 🔹 IMPLEMENTATION: VARIABLES, DATA TYPES & OUTPUT
// ======================================================

    // 🔸 Variables Section

    // Basic Variables 
    int number = 22;
    char percentage = '%';
    float pi = 3.14;

    // Variable reassignment
    int age = 20;
    age = 21;

    // Multiple variables
    int a = 30;
    int b = 80;

    // Naming conventions
    int _age = 20;
    int initial_price = 50;

    // Cleaner Output
    printf("\n--- Output ---\n");
    
    // Output
    printf("number = %d\n", number);
    printf("percentage = %c\n", percentage);
    printf("age = %d\n", age);
    printf("pi = %f\n", pi);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("_age = %d\n", _age);
    printf("initial price = %d\n", initial_price);

// ==================================================
// 🔹 INPUT EXAMPLE (SUM)
// ==================================================
 
    // 🔸 Input Section

    int x, y;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);

    int sum = x + y;
    printf("Sum = %d\n", sum);

// ==================================================
// 🔹 PRACTICE QUESTIONS WITH ANSWERS
// ==================================================

    // 🔸 Practice Section
    
    // 1. Perimeter of Rectangle
    int side1, side2;
    printf("\nEnter sides of rectangle: ");
    scanf("%d %d", &side1, &side2);

    int perimeter = 2 * (side1 + side2);
    printf("Perimeter = %d\n", perimeter);

    // 2. Cube of a number
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);

    int cube = n * n * n;
    printf("Cube = %d\n", cube);

    // 3. Comments Example:
    // Example of single-line comment
    // This program calculates perimeter
    
    /* Example of multi-line comment
    This program calculates the cube of a number */
    
    // Custom Example: Check even or odd
    printf("\nChecking if number is even or odd...\n");
    if (n % 2 == 0) {
        printf("Number is Even\n");
    } else {
        printf("Number is Odd\n");
    }    
    
    return 0;
}
