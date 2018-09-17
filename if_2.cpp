#include <iostream>

using namespace std;

int main()
{
    //&&가 "|| 보다 먼저 처리함★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
    int month;
    cout<< "달을 입력하세요: ";
    cin>>month;
    if(month>=3 && month<=5){
        cout<<"봄 입니다."<<endl;
        return 0;
    }
    else if(month>=6 && month<=8){
        cout<<"여름 입니다."<<endl;
        return 0;
    }
    else if(month>=9 && month<=11){
        cout<<"가을 입니다."<<endl;
        return 0;
    }
    else if(month>=12 || month>=1 && month<=2){
        cout<<"겨울 입니다."<<endl;
        return 0;
    }
    else{
        cout<<"Error!!"<<endl;
        return 0;
    }

    return 0;
}
