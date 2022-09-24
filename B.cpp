class B{
    private:
        int B1;
        float B2;
    public:
        B();
        ~B();
        void MB1();
        void MB2();
        int getB1();
        float getB2();
        void setB1(int B1);
        void setB2(float B2);
};

B::B(){ }

B::~B(){ }

void B::MB1(){ }

void B::MB2(){ }

int B::getB1(){ return B1; }

float B::getB2(){ return B2; }

void B::setB1(int B1){ this->B1 = B1; }

void B::setB2(float B2){ this->B2 = B2; }

