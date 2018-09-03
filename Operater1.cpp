#include <iostream>

using namespace std;

int main()
{
    int sec;
    int minute;
    int left;

    cout << "초를 입력하세요 : ";
    cin>>sec;
    minute=sec/60;
    left=sec%60;
    cout<<sec<<"초는 "<<minute<<"분"<<left<<"초 입니다."<<endl;

    return 0;
}
