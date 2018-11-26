//Macro Function
#include <iostream>
#define MUL(x) (x)*(x)  //선언

using namespace std;

int main()
{
    cout << MUL(1+2) << endl;   //사용
    cout << MUL(5) << endl;
    cout << MUL(1+3) << endl;
    return 0;
}
