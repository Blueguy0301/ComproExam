#include <iostream>

#include "../include/snippets.h"  //ALWAYS ADD THIS
using namespace std;
int main() {
    // create an array with unknown size
    string result[MAX];
    string* resultPtr = result;
    resultPtr = searchCMS("magento");

    // print resultPtr
    for (int i = 0; i < 5; i++) print(resultPtr[i]);

    // Your code here
    return 0;
}