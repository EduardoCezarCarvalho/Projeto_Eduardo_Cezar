class C{
	private:
        string C1;
        int C2;
    public:
        C();
        ~C();
        void MC1();
        void MC2();
};

void C::MC1(){
	std::cout << "MC1" << std::endl;
}

void C::MC2(){
	std::cout << "MC2" << std::endl;
}