// some code borrowed from Prof. Ziad Matni
#include <iostream>

class Test {
    public:
       short a;
       int b;
       int c;
       double d;
       
};

int main() {
    std::cout << "Size of int = " << sizeof(int) << " Bytes\n";
    std::cout << "Size of short = " << sizeof(short) << " Bytes\n";
    std::cout << "Size of double = " << sizeof(double) << " Bytes\n";

    // EXAMPLE: Class Test
    Test test;
    std::cout << "\nSize of the object of class Test is = " << sizeof(test) << " Bytes\n";
    
    // Addresses
    std::cout << "&test = " << &test << std::endl;  
    std::cout << "&test.a (short) = " << reinterpret_cast<void*>(&test.a) << std::endl;  
    std::cout << "&test.b (int) = " << reinterpret_cast<void*>(&test.b) << std::endl;  
    std::cout << "&test.c (int) = " << reinterpret_cast<void*>(&test.c) << std::endl;  
    std::cout << "&test.d (double) = " << reinterpret_cast<void*>(&test.d) << std::endl;  

    return 0;
}
