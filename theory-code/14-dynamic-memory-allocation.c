// Program: Dynamic Memory Allocation in C
// Description: Demonstrates malloc, calloc, realloc, free,
//              and practice problems using dynamic memory.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes + deep practice)

// Compiler: GCC (MinGW)
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// gcc 14-dynamic-memory.c -o dma
// dma

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Dynamic Memory Allocation:
// Memory is allocated at runtime using heap memory.

// ======================================================
// 🔹 FUNCTIONS USED
// ======================================================

// malloc()  → Allocates memory (uninitialized)
// calloc()  → Allocates memory (initialized to 0)
// realloc() → Resizes allocated memory
// free()    → Deallocates memory

// ======================================================
// 🔹 SYNTAX
// ======================================================

// ptr = (type*) malloc(size);
// ptr = (type*) calloc(n, size);
// ptr = realloc(ptr, new_size);
// free(ptr);

// ======================================================
// 🔹 BEST PRACTICES
// ======================================================

// - Always check if pointer is NULL
// - Free memory after use (avoid memory leaks)
// - Use calloc when initialization is required
// - Use realloc carefully (can change memory location)

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood how memory is allocated at runtime using heap
// - I learned difference between malloc and calloc
// - I practiced resizing memory using realloc
// - I understood importance of freeing memory to avoid leaks
// - I learned how pointers are used to access dynamically allocated memory
// - This topic helped me understand low-level memory management

// Important Points:
// - malloc gives garbage values, calloc initializes to 0
// - Always check if pointer is NULL
// - realloc may change memory location
// - free() is necessary to release memory
// - Use sizeof() to avoid size-related bugs

// Mistakes:
// - I forgot to free memory (memory leak)
// - I used uninitialized memory from malloc
// - I didn't check NULL pointer initially
// - I misunderstood realloc behavior (it can move memory)
// - I made mistakes in pointer dereferencing

// ======================================================
// 🔹 FUNCTION DECLARATIONS
// ======================================================

#include <stdio.h>
#include <stdlib.h>

// Practice functions
void rectanglePerimeter();
void cubeCalculation();
void dynamicArrayDemo();

// ======================================================
// 🔹 MAIN FUNCTION
// ======================================================

int main() {

    printf("\n=========== DYNAMIC MEMORY IN C ===========\n");

    // ==================================================
    // 🔹 DEMO: malloc, calloc, realloc
    // ==================================================

    dynamicArrayDemo();

    // ==================================================
    // 🔹 PRACTICE 1: PERIMETER OF RECTANGLE
    // ==================================================

    rectanglePerimeter();

    // ==================================================
    // 🔹 PRACTICE 2: CUBE OF NUMBER
    // ==================================================

    cubeCalculation();

    return 0;
}

// ======================================================
// 🔹 FUNCTION DEFINITIONS
// ======================================================

// DEMO: malloc, calloc, realloc
void dynamicArrayDemo() {

    int n;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    // malloc
    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // realloc (increase size)
    int newSize;
    printf("\nEnter new size: ");
    scanf("%d", &newSize);

    arr = (int*) realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return;
    }

    // input new elements
    for (int i = n; i < newSize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Updated array:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // free memory
    free(arr);
}

// PRACTICE 1
// Calculate perimeter using dynamic memory
void rectanglePerimeter() {

    // allocate memory for sides
    float *a = (float*) malloc(sizeof(float));
    float *b = (float*) malloc(sizeof(float));

    if (a == NULL || b == NULL) {
        printf("\nMemory allocation failed!\n");
        return;
    }

    printf("\nEnter sides of rectangle:\n");

    printf("a = ");
    scanf("%f", a);

    printf("b = ");
    scanf("%f", b);

    float perimeter = 2 * (*a + *b);

    printf("Perimeter = %.2f\n", perimeter);

    // free memory
    free(a);
    free(b);
}

// PRACTICE 2
// Cube of number using dynamic memory
void cubeCalculation() {

    // allocate memory
    int *num = (int*) calloc(1, sizeof(int));

    if (num == NULL) {
        printf("\nMemory allocation failed!\n");
        return;
    }

    printf("\nEnter a number: ");
    scanf("%d", num);

    int cube = (*num) * (*num) * (*num);

    printf("Cube = %d\n", cube);

    // free memory
    free(num);
}

