#include <iostream>
#include "Student.h"

Student::Student(){
    this->index = 1;
    for(int i=0; i<MAX;i++)
    {
        this ->book[i]= -1;
    }
}

void Student ::setname(const std::string &name)
{
    this ->name = name;

}

std::string Student:: getname()
{
    return this->name;
}

void Student ::issueBook (long id,int& num_book){
    if(index < MAX)
    {
        this->book[index-1]=id;
        index++;
    }
    else
    {
        std::cout <<"Cannot issuse anymore books!"<<std::endl;
    }
    num_book = index-1;
    
}

void Student::getIssuedBooks(long (&booksid)[MAX]){
    for (int i =0; i<MAX;i++)
    {
        booksid[i]=this->book[i];

    }
}

void Student::setGrade(Grade g)
{
    this->g= g;
}

// void Student::getGrade(){
// std::cout<<std::endl<<"Grade of the student is "<< m[g];
//     }

 void Student::getGrade()
{
    switch(g)
    {
        case 0:
        std::cout<<"A"<<std::endl;
        break;

        
        case 1 :
        std::cout<<"A-"<<std::endl;
        break;

        
        case 2:
        std::cout<<"B+"<<std::endl;
        break;
        
        case 3 :
        std::cout<<"B"<<std::endl;
        break;
        
        case 4 :        std::cout<<"B-"<<std::endl;
        break;
        
        case 5:
        std::cout<<"C+"<<std::endl;
        break;
        
        case 6:
        std::cout<<"C"<<std::endl;
        break;
        
        case 7:
        std::cout<<"C-"<<std::endl;
        break;
        
        case 8:
        std::cout<<"D"<<std::endl;
        break;
        
        case 9:
        std::cout<<"F"<<std::endl;
        break;

        default:
         std::cout<< "Error! invalid grade"<<std::endl;
    }
}
