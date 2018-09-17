#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "달을 입력하세요:";
    cin>>month;
    switch(month){
    case 3:
    case 4:
    case 5:
        cout << "봄 입니다." <<endl;break;
    case 6:
    case 7:
    case 8:
        cout << "여름 입니다." <<endl;break;
    case 9:
    case 10:
    case 11:
        cout << "가을 입니다." <<endl;break;
    default:
        cout << "겨울 입니다." <<endl;break;
    }
}
