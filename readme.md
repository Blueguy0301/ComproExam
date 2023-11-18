<!-- header -->

# README

Please use camelCase (camelCase). first letter is small. example: `thisIsCamelCase`

## boilerplate codes

1. `printLn` : print a line WITHOUT newline
2. `print` : print a line WITH newline
3. `getNum` : get a number from the user and returns it as an int. (parameter: ` string prompt`). Will keep asking until a valid number is entered.
4. `getStr` : get a string from the user and returns it as a string. (parameter: ` string prompt`).

example usage:

```cpp
int main() {
    printLn("Hello World! on the first line || ");
    print("this is on a same line");
    print(""); //to print a newline
    int num = getNum("Enter a number:");
    string str = getStr("Enter a string:");
    print("You entered: " + str);
    return 0;
}
```

output:

```
Hello World! on the first line || this is on a same line
Enter a number: 123
You entered: 123
Enter a string: hello world
You entered: hello world
```

## notes

1. ALWAYS Add `#include "../include/snippets.h" ` to the top of your code. for you to use the snippets.
2. no need to add `#include <iostream>` to your code.
3. this is just for convenience. you can always add your own snippets. on `snippets.h` and `snippets.cpp` file. (or just tell me)
