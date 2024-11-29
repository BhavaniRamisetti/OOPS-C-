#include <iostream>

void printValue(void* ptr, char type) {
    switch (type) {
        case 'i': // Integer
            std::cout << "Integer: " << *static_cast<int*>(ptr) << std::endl;
            break;
        case 'f': // Float
            std::cout << "Float: " << *static_cast<float*>(ptr) << std::endl;
            break;
        case 'd': // Double
            std::cout << "Double: " << *static_cast<double*>(ptr) << std::endl;
            break;
        case 'c': // Character
            std::cout << "Character: " << *static_cast<char*>(ptr) << std::endl;
            break;
        default:
            std::cout << "Unknown type" << std::endl;
            break;
    }
}

int main() {
    int i = 10;
    float f = 3.14f;
    double d = 3.14159;
    char c = 'A';

    void* ptr = NULL;

    // Pointing to an integer
    ptr = &i;
    printValue(ptr, 'i');

    // Pointing to a float
    ptr = &f;
    printValue(ptr, 'f');

    // Pointing to a double
    ptr = &d;
    printValue(ptr, 'd');

    // Pointing to a character
    ptr = &c;
    printValue(ptr, 'c');

    return 0;
}

