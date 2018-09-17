#include <iostream>

using namespace std;

int main()
{
    int sel;
    cout << "내가 궁금해?"<<endl;
    cout << "1. 이름"<<endl;
    cout << "2. 성별"<<endl;
    cout << "3. 취미"<<endl;
    
    cin>>sel;
    
    switch(sel){
    case 1:
        cout << "Sunny" <<endl;break;
    case 2:
        cout << "Male" <<endl;break;
    case 3:
        cout << "Walking" <<endl;break;
    default: cout << "Error" << endl;
    }
    return 0;
}
