#include <iostream>

int main()



{

using namespace std;

int a,sum = 0;

for(a=1;a<=10;a++)

{

cout<< a <<endl;

sum+=a;

}

cout<< "sum = " << sum <<endl;

  cout<< "Average = " << (double)(sum/10.0) <<endl;

return 0;

}
