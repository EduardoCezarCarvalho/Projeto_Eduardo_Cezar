class A{
    private:
        int A1;
        float A2;
    public:
        A();
        ~A();
        void MA1();
        void MA2();
        void MA3();
        int getA1();
        float getA2();
        void setA1(int A1);
        void setA2(float A2);
};

A::A(){ }

A::~A(){ }

void A::MA1(){ }

void A::MA2(){ }

void A::MA3(){
	std::cout<< "Alteração a classe A apartir do clone" << std::endl;
}

int A::getA1(){ return A1; }

float A::getA2(){ return A2; }

void A::setA1(int A1){ this->A1 = A1; }

void A::setA2(float A2){ this->A2 = A2; }
