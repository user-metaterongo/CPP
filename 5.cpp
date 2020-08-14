
#include <iostream>
char &fun (char *s)
{    return s[0];
}
int main(void )
{
    char a[7] ="Manish";
    char ch =' ';
    std::cout << "1"<<fun(a)<< std::endl;
    ch=fun(a); //what does this step mean? 
    //a=5
    std::cout << "2" << fun(a) << std::endl;
    std::cout << ch << std::endl;
std::cout << a << std::endl;
        
}
