class D{
	private:
        char D1;
        unsigned D2;
    public:
        D();
        ~D();
        void MD1();
        void MD2();
        void MD4();
};

void D::MD1(){ }

void D::MD2(){ }

void D::MD4(){
	std::cout<< "MD4" std::endl;
}
