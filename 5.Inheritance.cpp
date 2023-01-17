#include<iostream>

class knight //parent
{
    public:
        std::string name;
        int attack;
    protected:
        int deffend;
    

};

class light :public knight //child
{
    public:
        int bonus_atk;

        void set_def(int def)
        {
            deffend = def;
        }
        void display()
        {
            std::cout << "protect = " << deffend << std::endl;
        }
};

int main()
{
    light son;
    son.attack = 10;
    son.bonus_atk = 50;
    int total = son.attack * son.bonus_atk;
    son.set_def(50);
    son.display();
    std::cout <<"son atk = " << son.attack << " bonus = "<< son.bonus_atk << " total = "<< total;
}
