#include <iostream>

class D{
    private:
        char D1;
        char D2;
    public:
        D();
        ~D();
        void MD1();
        void MD2();

};

D::D(){
}

D::~D(){
}

void D::MD1(){
    std::cout << " MD1 " << std::endl;
}


void D::MD2(){
    std::cout << " MD2 " << std::endl;
}
