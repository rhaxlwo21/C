#include <iostream>
#include <sstream>

using namespace std;

int add(int a, int b){  //사용자 정의 함수를 선언
    return(a+b);
}

int main()
{
    int a,b;
    string s;

    getline(cin,s); //문자열로 받아들임
    istringstream si(s);    //space bar로 받아 들임, 분류하여 3개의 값으로 받아들임
    si>>a>>b>>s;
    cout << "a+b=" << add(a,b) << ", b=" << b << ", s=" << s << endl;
    return 0;
}
