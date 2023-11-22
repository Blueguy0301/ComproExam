#include <iostream>

#include "../include/snippets.h"  //ALWAYS ADD THIS
using namespace std;
int main() {
    printLn("Hello World! on the first line || ");
    print("this is on a same line");
    print("");  // to print a newline
    int num = getNum("Enter a number:");
    print("You entered: " + to_string(num));
    string str = getStr("Enter a string:");
    print("You entered: " + str);
    return 0;
}