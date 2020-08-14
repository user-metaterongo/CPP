#include <iostream>

int main() {

   int a = 10;

   int* ptr = &a;

 

   std::cout << "ptr = " << ptr << std::endl;

   std::cout << "&ptr = " << &ptr << std::endl;

   std::cout << "&a = " << &a << std::endl;

   std::cout << "a = " << a << std::endl;

   std::cout << "*ptr = " << *ptr << std::endl;

 

   *ptr = 20;

   std::cout << "a = " << a << std::endl;

}