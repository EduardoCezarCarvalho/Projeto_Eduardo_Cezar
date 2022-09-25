class D{
	private:
        char D1;
        unsigned D2;
    public:
        D();
        ~D();
        void MD1();
        void MD2();
        void MD3();
};

void D::MD1(){ }

void D::MD2(){ }

void D::MD3(){
	std::cout<< "MD3" std::endl;
}
