#include <iostream>

class C{
    private:
        int C1;
        float C2;
    public:
        C();
        ~C();
        void MC1();
        void MC2();
        int getC1();
        float getC2();
        void setC1(int C1);
        void setC2(float C2);
};

C::C(){
}

C::~C(){
}

void C::MC1(){
    std::cout << " MC1 " << std::endl;
}


void C::MC2(){
    std::cout << " MC2 " << std::endl;
}
