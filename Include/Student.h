#pragma once

#include <string>
#include <map>
#define MAX 10
enum Grade {A, A_minus, B_plus, B, B_minus, C_plus, C, C_minus, D,F};
// std::map <int, std::string> m {
//     {0, "A"},
//     {1, "A_minus"},
//     {2, "B"},
//     {3, "B_minus"},
//     {4, "C"},
//     {5, "C_minus"},
//     {6, "D"},
//     {7, "D_minus"}
// };

class Student {
    private :
        std::string name;
        long book [MAX];
        
        Grade g ;

    public :
        Student();
        int index;
        void setname(const std::string &);
        std::string getname();
        void issueBook (long id,int &);
        void getIssuedBooks(long (&booksid)[MAX]);
        void setGrade (Grade grade);
        void getGrade();
};