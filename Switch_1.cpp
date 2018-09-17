#include <iostream>

using namespace std;

int main()
{
    int jum;
    cin>>jum;
    switch(jum/10){ //10으로 나눠버림
    case 10:    //case는 아래로 흘러가는 성질, 따라서 break를 통해 빠져 나가야 함.
    case 9: 
        cout << "A" <<endl;
        break;
    case 8: 
        cout << "B" <<endl;
        break;
    case 7: 
        cout << "C" <<endl;
        break;
    case 6: 
        cout << "D" <<endl;
        break;
    default : 
        cout << "E" << endl;
        break;
    }
}
