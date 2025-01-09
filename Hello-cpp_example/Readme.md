# Compilation Process of a C++ Program in Terminal

## Step-by-Step Compilation Process

### 1. Write the C++ Program
Create a C++ source file using the `vim` text editor.

Example: Using `vim` to create `hello-c.cpp`:
```bash
vim hello-c.cpp
```

In `vim`, press `i` to enter insert mode and write the following code:
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
To save and exit `vim`:
1. Press `ESC` to leave insert mode.
2. Type `:wq` and press `Enter`.

---
### 2. Compile the C++ Program
Use the **GNU Compiler Collection (G++ for C++)** to compile the program into an executable.

```bash
g++ hello-c.cpp -o hello
```

Explanation:
- `g++`: The GCC compiler for C++ programs.
- `hello-c.cpp`: The source file.
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
```


