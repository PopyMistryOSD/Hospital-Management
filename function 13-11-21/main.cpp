#include <iostream>

using namespace std;

class sampel
{
    private:
        int a;
        public:
        void setvalue(int x)
        {
            a=x;
        }
        int getvalue()
        {
            return a;
        }

};


int main()
{
    sampel oj;
    oj.setvalue(10);
    cout<<oj.getvalue();
    return 0;
}



