//내장 함수 = 해더 파일로 가지고 있는 함수
#include <iostream> //sin, abs, pow, sqrt
#include <cmath>
#define PI 3.1415926535

using namespace std;

int main()
{
    cout << sin(90*PI/180) << endl;
    cout<<abs(-12)<<endl;   //abs=절대값
    cout<<pow(3,3)<<endl;   //3의 3승
    cout<<sqrt(4)<<endl;    //루트
    return 0;
}
