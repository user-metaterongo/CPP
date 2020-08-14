#include<iostream>
#include "Student.h"

int main(){

 int num_book;
 Student s;
   s.setname("Ayush");
   s.issueBook(2899,num_book);
   s.issueBook(2737,num_book);
   s.issueBook(10,num_book);
   s.issueBook(11,num_book);
   printf("\n");
   std::cout<< s.getname()<<std::endl;
    
   long books[MAX];
   s.getIssuedBooks(books);
   std::cout<< "\nIssued books id "<<std::endl;
   for(int i=0;i < num_book ;i ++){
      std::cout<< books[i] <<" ";
         
      }
   printf ("\nYour Grade is ");
   s.setGrade(A_minus);
   s.getGrade();
}