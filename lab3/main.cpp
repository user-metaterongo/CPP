#include "vector.h"
#include<iostream>
int main() 
{
vector v1(10,11,12);
vector v2(20,30,40);
vector v3 =(v2.add(v1));
std::cout<<"vector 1 is "; v1.result();
std::cout << "Vector 2 is" ;
v2.result();
std::cout << "Result is " ;
v3.result();
}