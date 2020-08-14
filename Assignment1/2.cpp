#include<iostream>
void sw(int &a,int &b){
a=a+b;
b=a-b;
a=a-b;
}

int main()
{
int a=5;
int b=10;
sw(a,b);
std::cout <<a << std::endl;
std::cout <<b;
}