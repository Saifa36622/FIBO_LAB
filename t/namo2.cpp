#include <iostream>

using namespace std ;

class deedy
{
    //private:
       // int y;
    //public:
        //void bob(int x)
        //{
       //     y = 5;
        //    y = x;
        //};
//};
    public:
        int hi;
        void bob(int x){
            y = x;
        }
        void pp()
        {
            cout << y;
        }
    private:
            int y;
};
int main()
{
    deedy earn;
    earn.hi = 10;
    earn.bob(5);
    earn.pp();
    cout << earn.hi;
}