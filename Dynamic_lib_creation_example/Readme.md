# Creating a Dynamic Library `libmath.so`

This guide demonstrates how to create a dynamic library named `libmath.so` using three source files: `add.c`, `mul.c`, and `sub.c`.

---

## Step 1: Create the Source Files

### `add.c`
```c
#include "mathlib.h"

int add(int a, int b) {
    return a + b;
}
```

### `mul.c`
```c
#include "mathlib.h"

int mul(int a, int b) {
    return a * b;
}
```

### `sub.c`
```c
#include "mathlib.h"

int sub(int a, int b) {
    return a - b;
}
```

### `mathlib.h`
```c
#ifndef MATHLIB_H
#define MATHLIB_H

int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);

#endif
```

---

## Step 2: Compile the Object Files

Use the `-fPIC` option to compile the source files into position-independent code.

```bash
gcc -c -fPIC add.c -o add.o
gcc -c -fPIC mul.c -o mul.o
gcc -c -fPIC sub.c -o sub.o
```
//gcc -c add.c mul.c -fpic to create independent code
---

## Step 3: Create the Dynamic Library

Link the object files to create the shared library `libmath.so`.

```bash
gcc -shared -o libmath.so add.o mul.o sub.o
 U can use // gcc *.o -shared -o libmath.so
```

---

## Step 4: Use the Library in a Program

### Create a Test Program
Create a program `main.c` to use the functions from `libmath.so`.

```c
#include <stdio.h>
#include "mathlib.h"

int main() {
    int x = 10, y = 5;
    printf("Add: %d\n", add(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Sub: %d\n", sub(x, y));
    return 0;
}
```

### Compile and Link the Test Program
Specify the library path and name during compilation.

```bash
gcc -L. -o main main.c -lmath
```

Here, `-L.` indicates the current directory, and `-lmath` links the `libmath.so` library.

---

## Step 5: Run the Program

Method I:To ensure the system finds the shared library, set the `LD_LIBRARY_PATH` environment variable.

```bash
export LD_LIBRARY_PATH=.
./main(pwd)
```

—
Method II:To ensure the system finds the shared library, 

Copy dyn lib into root folder
```bash
Sudo cp libmath.so /usr/lib
```
Then main
```bash.
./main
```
## Step 6: Clean Up (Optional)

Remove intermediate files.

```bash
rm *.o main libmath.so
```

---

## Notes

1. The `mathlib.h` header file should be included in both the source files and the main program.
2. Ensure `libmath.so` is in the library search path (`LD_LIBRARY_PATH`) when running the program.


