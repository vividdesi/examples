# Compilation Process of a C Program(hello-c.c) in  Terminal

## Step-by-Step Compilation Process

### 1. Write the C Program

Create a C source file using a text editor like `nano`, `vim`, or `gedit`.

Example: Using `vi` to create `hello-c.c`:
```bash
vi hello-c.c
```
In `vim`, press `i` to enter insert mode and write the following code:
Write the following code inside the file:
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
``````
To save and exit `vim`:
1. Press `ESC` to leave insert mode.
2. Type `:wq` and press `Enter`.
---
### 2. Compile the C Program
Use the **GNU Compiler Collection (GCC)** to compile the C program into an executable.

```bash
gcc hello-c.c -o hello
```

Explanation:
- `gcc`: The GCC compiler for C programs.
- `hello-c.c`: The source file.
- `-o hello`: Specifies the output file name (here, `hello`). If omitted, the default output is `a.out`.

---

### 3. Run the Executable
Run the compiled program using `./` followed by the executable name:

```bash
./hello
```

You should see the output:
```
Hello, World!

