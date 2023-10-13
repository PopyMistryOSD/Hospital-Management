#include <iostream>

using namespace std;

class sampel
{
    public:
        int a;
        int sum(int a,int b)
        {
            return a+b;

        }

};


int main()
{
    sampel oj;

    cout<<oj.sum(10,10);

}



