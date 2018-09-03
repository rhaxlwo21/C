#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a;

    string week[]={"월","화","수","목","금","토","일"};
    cout<<"원하는 숫자를 입력하세요(0~6) : ";
    cin>>a;
    cout<<sizeof(week)<<endl;
    cout<<week[0].length()<<endl;

    return 0;
}
