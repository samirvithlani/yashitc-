#ifndef DEMO_HPP
#define DEMO_HPP

class Bank{

    private:
    int balance;

    public:
    Bank(int bal);
    void deposit(int amt);
    void withdraw(int amt);
    void display();

};



#endif // DEMO_HPP