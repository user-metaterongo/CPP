#pragma once

class vector {

    private:
        int *e1,*e2,*e3;
    
    public:
        vector ();
        vector (int ,int ,int) ;
        vector (const vector &);
        vector add (const vector &);
        ~vector();
        void result();
        //int index;
};
