# C programming 

![C programming language](https://media.licdn.com/dms/image/v2/C5612AQEe2NcU8hQtvA/article-cover_image-shrink_720_1280/article-cover_image-shrink_720_1280/0/1643807289821?e=2147483647&v=beta&t=GP79FLc31HPAqD9597b_VXe1Rzeq4j3RQhjhqaSlplA)

C programming is a general-purpose, procedural programming language known for its efficiency and low-level access to system memory, 
often used to create operating systems, embedded systems, and complex applications due to its ability to interact with hardware components directly;
making it a foundational language for many other programming languages.

| Program | Description |
| ----------- | ----------- |
| First Program | Syntex |
| #include <stdio.h>| Header Files |
int main() { | main function() |
   // printf() displays the string inside quotation 
   printf("Hello, World!"); | output function() | 
   return 0; | return statement | 
} | end code |


# **C Programming Roadmap (Beginner to Advanced)**  

This roadmap provides a structured approach to learning **C programming** from scratch to an advanced level.  

---

## **📌 1. Getting Started with C**  
✅ **Learn the Basics of C**  
- What is C?  
- History and Importance of C  
- Setting up a C Compiler (GCC, Turbo C, Code::Blocks, etc.)  
- Writing and Running Your First C Program  

💡 **Example:**  
```c
#include <stdio.h>
int main() {
    printf("Hello, World!");
    return 0;
}
```

---

## **📌 2. Basic Concepts**  
✅ **Variables and Data Types**  
- `int`, `float`, `char`, `double`, `void`  
- Constants (`#define`, `const`)  
- Input/Output (`scanf()`, `printf()`)  

💡 **Example:**  
```c
int age = 25;
float pi = 3.14;
char grade = 'A';
```

✅ **Operators in C**  
- Arithmetic Operators (`+`, `-`, `*`, `/`, `%`)  
- Relational Operators (`==`, `!=`, `>`, `<`, `>=`, `<=`)  
- Logical Operators (`&&`, `||`, `!`)  
- Bitwise Operators (`&`, `|`, `^`, `<<`, `>>`)  

---

## **📌 3. Control Flow Statements**  
✅ **Conditional Statements**  
- `if`, `if-else`, `nested if`, `switch-case`  

💡 **Example:**  
```c
if (age >= 18) {
    printf("Eligible to vote.");
} else {
    printf("Not eligible.");
}
```

✅ **Loops in C**  
- `for`, `while`, `do-while`  
- `break` and `continue`  

💡 **Example:**  
```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

---

## **📌 4. Functions in C**  
✅ **Understanding Functions**  
- Function Declaration, Definition, and Calling  
- Return Values and Parameters  
- Recursion  

💡 **Example:**  
```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Sum: %d", result);
    return 0;
}
```

---

## **📌 5. Arrays and Strings**  
✅ **Arrays**  
- One-dimensional arrays  
- Multi-dimensional arrays  
- Array Traversing  

💡 **Example:**  
```c
int numbers[] = {1, 2, 3, 4, 5};
printf("%d", numbers[0]); // Output: 1
```

✅ **Strings in C**  
- String Manipulation (`strlen()`, `strcpy()`, `strcmp()`)  

💡 **Example:**  
```c
char name[] = "John";
printf("%s", name);
```

---

## **📌 6. Pointers in C**  
✅ **Introduction to Pointers**  
- Pointer Declaration and Dereferencing  
- Pointer Arithmetic  
- `NULL` Pointers  
- Function Pointers  

💡 **Example:**  
```c
int x = 10;
int *ptr = &x;
printf("%d", *ptr);  // Output: 10
```

✅ **Pointer and Arrays**  
✅ **Dynamic Memory Allocation** (`malloc()`, `calloc()`, `free()`)  

💡 **Example:**  
```c
int *ptr = (int*) malloc(5 * sizeof(int));
free(ptr);  // Free allocated memory
```

---

## **📌 7. Structures and Unions**  
✅ **Structures in C**  
- Creating and Using Structures  
- Nested Structures  
- Array of Structures  

💡 **Example:**  
```c
struct Student {
    char name[50];
    int age;
};

struct Student s1 = {"John", 20};
printf("%s is %d years old", s1.name, s1.age);
```

✅ **Unions in C**  

---

## **📌 8. File Handling in C**  
✅ **Reading and Writing Files**  
- `fopen()`, `fclose()`, `fprintf()`, `fscanf()`, `fgets()`, `fputs()`  

💡 **Example (Writing to a File):**  
```c
FILE *fptr = fopen("data.txt", "w");
fprintf(fptr, "Hello, File!");
fclose(fptr);
```

💡 **Example (Reading from a File):**  
```c
FILE *fptr = fopen("data.txt", "r");
char text[100];
fgets(text, 100, fptr);
printf("%s", text);
fclose(fptr);
```

---

## **📌 9. Advanced Concepts**  
✅ **Preprocessors and Macros**  
- `#define`, `#include`, `#ifdef`, `#ifndef`  

✅ **Bit Manipulation**  
- AND, OR, XOR Operations  

✅ **Multithreading (POSIX Threads - pthreads)**  
✅ **Graphics Programming in C**  
✅ **Socket Programming in C**  

---

## **📌 10. Data Structures and Algorithms in C**  
✅ **Arrays, Linked Lists, Stacks, Queues, Trees, Graphs**  
✅ **Sorting Algorithms (Bubble Sort, Quick Sort, Merge Sort, etc.)**  
✅ **Searching Algorithms (Binary Search, Linear Search)**  

💡 **Example (Bubble Sort):**  
```c
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
```

---

## **📌 11. Competitive Programming with C**  
✅ **Mastering STL (Standard Template Library)**  
✅ **Solving Problems on Platforms (Codeforces, Leetcode, etc.)**  

---

## **📌 12. System Programming and Embedded C**  
✅ **Operating System Concepts in C**  
✅ **Embedded C for Microcontrollers**  

---

## **📌 13. Projects to Build in C**  
✅ **Basic Projects**  
- Calculator  
- To-Do List  
- Student Record Management  

✅ **Intermediate Projects**  
- Bank Management System  
- Tic-Tac-Toe Game  

✅ **Advanced Projects**  
- Compiler in C  
- Operating System Components  
- Embedded System Projects  

---

## **📌 14. Resources to Learn C**  
### **📚 Books:**  
- *The C Programming Language* – Brian Kernighan & Dennis Ritchie  
- *Let Us C* – Yashavant Kanetkar  

### **🎓 Online Courses:**  
- Udemy  
- Coursera  
- GeeksforGeeks  
- LeetCode & Codeforces  

---

## **🚀 Final Tips**  
✔️ **Practice Regularly**  
✔️ **Solve Coding Problems**  
✔️ **Work on Real-World Projects**  
✔️ **Read and Understand C Source Codes**  

This roadmap will help you **master C programming from beginner to advanced level**. Let me know if you need explanations on any specific topics! 🚀 copied from ChatGPT (for learning purposes 🍎) 
